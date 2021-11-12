#ifndef UNIT_TEST
#include <iostream>
#include <fstream>

#include "lectorDeBinario.h"

using namespace std;

int main()
{
    //Indicar nombre de libro y persona a buscar
    LectorDeBinario lector1("personas.dat", 4);

    //Indicar nombre de libro y persona a buscar
    LectorDeBinario lector2("personas.dat", 25);

    //Indicar nombre de libro y persona a buscar
    //LectorDeBinario lector3("personitas.dat", 0);

    return 0;
}
#endif