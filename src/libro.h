#ifndef LIBRO_H
#define LIBRO_H

#include <string>

using namespace std;

class Libro
{
    int id;
    char nombre[15];
    char apellido[15];
    char correo[50];

public:
    Libro(int id, string nombreDePersona, string apellidoDePersona, string correoDePersona);
    Libro();
    int getID();
    string getNombre();
    string getApellido();
    string getCorreo();
};

#endif