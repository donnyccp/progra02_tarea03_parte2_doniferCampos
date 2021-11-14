#include <gtest/gtest.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "../src/libro.h"
#include "../src/lectorDeBinario.h"
#include "../src/excepciones/excepcionNoSePudoAbrirArchivoBinario.h"
#include "../src/excepciones/excepcionPersonaSolicitadaNoSeEncuentra.h"
#include "../src/excepciones/excepcionPersonaSolicitadaNoValida.h"

using namespace std;

namespace
{
  TEST(LectorTest, Prueba_lecturaDeBinario)
  {
    //Creacion de libro
    Libro libroEscritoBinario{1, "Amelia", "Earhart", "amelia_earhart@ucr.com"};
    string nombreArchivoPrueba = "pruebaDeLibro1.dat";

    //Creacion de archivo binario y escritura
    ofstream archivoSalida;
    archivoSalida.open(nombreArchivoPrueba, ios::out | ios::binary);
    archivoSalida.write((char *)&libroEscritoBinario, sizeof(Libro));
    archivoSalida.close();

    //Apertura y Escritura del libro
    ifstream archivoDeEntradaLeido;
    LectorDeBinario lectorPrueba1;
    archivoDeEntradaLeido = lectorPrueba1.AbrirArchivo(nombreArchivoPrueba);
    int id = 0;
    string nombre = "";
    string apellido = "";
    string correo = "";
    string datosPersona = "";

    datosPersona = lectorPrueba1.BuscarPersona(archivoDeEntradaLeido, 0);
    std::istringstream ss(datosPersona);
    ss >> id >> nombre >> apellido >> correo;
    archivoDeEntradaLeido.close();

    EXPECT_EQ(id, libroEscritoBinario.getID());
    EXPECT_EQ(nombre, libroEscritoBinario.getNombre());
    EXPECT_EQ(apellido, libroEscritoBinario.getApellido());
    EXPECT_EQ(correo, libroEscritoBinario.getCorreo());
  }

  TEST(LectorTest, Prueba_ExcepcionNoSePudoAbrirArchivoBinario)
  {

    Libro lecturaDePrueba2{1, "Jane", "Austen", "jane_austen@ucr.com"};
    string nombreArchivoPrueba = "pruebaDeLibro2.dat";

    EXPECT_THROW(
        {
          ofstream archivoSalida;
          archivoSalida.open(nombreArchivoPrueba, ios::out | ios::binary);
          archivoSalida.write((char *)&lecturaDePrueba2, sizeof(Libro));
          archivoSalida.close();

          // Leer el libro de prueba
          LectorDeBinario lectorDePrueba2("pruebaDeLibro2b.dat", 0);
        },
        ExcepcionNoSePudoAbrirArchivoBinario);
  }

 
  TEST(LectorTest, Prueba_ExcepcionPersonaSolicitadaNoSeEncuentra)
  {

    Libro lecturaDePrueba3{1, "Jane", "Austen", "jane_austen@ucr.com"};
    string nombreArchivoPrueba = "pruebaDeLibro2.dat";

    EXPECT_THROW(
        {
          //Creacion de archivo binario y escritura
          ofstream archivoSalida;
          archivoSalida.open(nombreArchivoPrueba, ios::out | ios::binary);
          archivoSalida.write((char *)&lecturaDePrueba3, sizeof(Libro));
          archivoSalida.close();

          
          // Leer el libro de prueba
          LectorDeBinario lectorDePrueba3(nombreArchivoPrueba,20);
        },
        ExcepcionPersonaSolicitadaNoSeEncuentra);
  }

  TEST(LectorTest, Prueba_ExcepcionPersonaSolicitadaNoEsValidaIDNoValido)
  {

    Libro lecturaDePrueba4{-1, "Jane", "Austen", "jane_austen@ucr.com"};
    string nombreArchivoPrueba = "pruebaDeLibro3.dat";

    EXPECT_THROW(
        {
          //Creacion de archivo binario y escritura
          ofstream archivoSalida;
          archivoSalida.open(nombreArchivoPrueba, ios::out | ios::binary);
          archivoSalida.write((char *)&lecturaDePrueba4, sizeof(Libro));
          archivoSalida.close();

          
          // Leer el libro de prueba
          LectorDeBinario lectorDePrueba4(nombreArchivoPrueba,0);
        },
        ExcepcionPersonaSolicitadaNoValida);
  }

}