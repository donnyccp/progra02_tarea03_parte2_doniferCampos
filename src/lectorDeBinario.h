#ifndef LECTORDEBINARIO_H
#define LECTORDEBINARIO_H

#include "libro.h"


#include <string>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class LectorDeBinario
{



public:
LectorDeBinario();
LectorDeBinario(string nombreDeArchivoBinario, int idPersonaABuscar);
ifstream AbrirArchivo(string nombreDeArchivo);
string BuscarPersona(std::istream& archivoLeido, int idPersona);
Libro ComprobarLibro(std::istream& archivoDeEntrada, int idDeLibro);
string VerDatosDePersona(Libro libroPersona);
void Cerrar();


};

#endif