#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <libreria_global.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


struct Clientes{

    string idCliente;
    string nombre;
    string apellido;
    string email;
    string telefono;
    string fechaNac;
    string estado;

};

struct Clases{

    string idClase;
    string nombre_clase;
    string horario;
    string cupo;
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
