#ifndef MANEJOARCHIVOS_H
#define MANEJOARCHIVOS_H

#include <libreria.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int largo_archivo (ifstream &archivo);
void leer_archivo_clientes (ifstream &archivo, Clientes*);
void leer_archivo_clases (ifstream &archivo, Clases*);


#endif // MANEJOARCHIVOS_H
