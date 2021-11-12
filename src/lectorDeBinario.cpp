#include "lectorDeBinario.h"
#include "libro.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "./excepciones/excepcionPersonaSolicitadaNoSeEncuentra.h"
#include "./excepciones/excepcionPersonaSolicitadaNoValida.h"
#include "./excepciones/excepcionNoSePudoAbrirArchivoBinario.h"

using namespace std;

LectorDeBinario::LectorDeBinario(string nombreDeArchivoBinario, int idPersonaABuscar)

{
     ifstream archivoDeEntradaLeido;
     archivoDeEntradaLeido = AbrirArchivo(nombreDeArchivoBinario);
     cout<<"La persona a buscar es la numero :"+to_string(idPersonaABuscar)<<endl;
     cout<<"La persona encontrada es:"+BuscarPersona(archivoDeEntradaLeido, idPersonaABuscar)<<endl;
     archivoDeEntradaLeido.close();
}

ifstream LectorDeBinario::AbrirArchivo(string nombreDeArchivo)
{
     ifstream archivoEntrada;
     archivoEntrada.open(nombreDeArchivo, ios::in | ios::binary);

     if (!archivoEntrada.is_open())
     {

          throw new ExcepcionNoSePudoAbrirArchivoBinario();
     }

     return archivoEntrada;
}

string LectorDeBinario::BuscarPersona(std::istream &archivoLeido, int idPersona)
{
     Libro libroPersona;
     string datosDePersona = "";

     libroPersona = ComprobarLibro(archivoLeido, idPersona);
     try
     {
          datosDePersona = VerDatosDePersona(libroPersona);

     }
     catch (...)
     {
          cout << "No se que paso" << endl;
     }

     return datosDePersona;
}

string LectorDeBinario::VerDatosDePersona(Libro libroDePersona)
{
     string informacionDePersona = "";
     string idDePersona = to_string(libroDePersona.getID());
     string nombreDePersona = libroDePersona.getNombre();
     string apellidoDePersona = libroDePersona.getApellido();
     string correoDePersona = libroDePersona.getCorreo();
     return informacionDePersona = idDePersona + " " + nombreDePersona + " " + apellidoDePersona + " " + correoDePersona;
}
Libro LectorDeBinario::ComprobarLibro(std::istream &archivoEntrada, int idLibro)

{

    

     Libro libroLeido;

     // Posición del libro número idLibro

      long posicionLibro = sizeof(Libro) * (idLibro);

      

     archivoEntrada.seekg(0, ios::end);
     long fileSize = archivoEntrada.tellg();

    if (posicionLibro > fileSize)
     {
          throw ExcepcionPersonaSolicitadaNoValida();
     }

     archivoEntrada.seekg(posicionLibro);
     archivoEntrada.read((char *)&libroLeido, sizeof(Libro));

  

     return libroLeido;
}

