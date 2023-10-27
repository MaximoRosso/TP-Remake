#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <libreria_global.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#define NOMBRE_CSV_CLIENTES "iriClientesGYM.csv"
#define NOMBRE_CSV_RESERVAS "iriClasesGYM.csv"

using namespace std;

struct Clases_inicializadas{

    string nombre;
    const int cupo;
    int horario[12];
};

struct Clientes{

    int idCliente;
    string nombre;
    string apellido;
    string email;
    string telefono;
    string fechaNac;
    int estado;

};

struct Clases{

    int idClase;
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



#endif // LIBRERIA_H
