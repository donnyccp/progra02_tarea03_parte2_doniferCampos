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

ifstream archivoEntrada;

public:
LectorDeBinario(string nombreArchivo);
void AbrirArchivo(string nombreDeArchivo);
Libro ComprobarLibro(int idDeLibro);
void Cerrar();


};

#endif