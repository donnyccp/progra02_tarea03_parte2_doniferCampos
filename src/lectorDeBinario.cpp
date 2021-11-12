#include "lectorDeBinario.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "libro.h"
#include "./excepciones/excepcionPersonaSolicitadaNoSeEncuentra.h"
#include "./excepciones/excepcionNoSePudoAbrirArchivoBinario.h"
using namespace std;

LectorDeBinario::LectorDeBinario(string nombreArchivo)
{
     AbrirArchivo(nombreArchivo);
}

void LectorDeBinario::AbrirArchivo(string nombreDeArchivo)
{
     ifstream archivoEntrada;
     archivoEntrada.open(nombreDeArchivo, ios::in | ios::binary);

     if (!archivoEntrada.is_open())
     {

          throw new ExcepcionNoSePudoAbrirArchivoBinario();
     }
}

Libro LectorDeBinario::ComprobarLibro(int idLibro)
{
     Libro libroLeido;

     // Posición del libro número idLibro
     long posicionLibro = sizeof(Libro) * (idLibro);

    
    /* archivoEntrada.seekg(0, ios::end);
     long fileSize = archivoEntrada.tellg();

     if (posicionLibro > fileSize)
    {
        throw ExcepcionNoSeAbreArchivoBinario();
    }
    */

     archivoEntrada.seekg(posicionLibro);
     archivoEntrada.read((char *)&libroLeido, sizeof(Libro));
     
     
     return libroLeido;
}

void LectorDeBinario::Cerrar()
{
     archivoEntrada.close();
}