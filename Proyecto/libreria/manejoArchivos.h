#ifndef MANEJOARCHIVOS_H
#define MANEJOARCHIVOS_H

#include <libreria.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int largo_archivo (ifstream);
void leer_archivo_clientes (ifstream, Clientes);
void leer_archivo_reservas (ifstream, Clases);


#endif // MANEJOARCHIVOS_H
