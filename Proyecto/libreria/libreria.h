#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <libreria_global.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


struct Clientes{

    unsigned int idCliente;
    string nombre;
    string apellido;
    string email;
    string telefono;
    string fechaNac;
    int estado;

};

struct Clases{

    unsigned int idClase;
    string nombre_clase;
    float horario;
};


typedef struct {

    unsigned int idCurso;
    time_t fechaInscripcion;

} Inscripcion;

typedef struct {

    unsigned int idCliente, cantInscriptos;
    Inscripcion* CursosInscriptos;

} Asistencia;

/*
 * struct Clases_inicializadas{

    string nombre;

    int horario[12];
};

 */


#endif // LIBRERIA_H
