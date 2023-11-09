#ifndef FUNCAUX_H
#define FUNCAUX_H

#include <libreria.h>

/*FILTROS PARA LOS DATOS*/
bool identificar_menores(string);
bool existencia_clase(Clases, int);
bool chequear_letras_nombres (string);
bool ExistenciaPersona(Clientes, int, string);
bool cupos_al_dia(Clientes );

/*FUNCIONES QUE REVISAN QUE NO TENGA 2 CLASES EN EL MISMO HORARIO*/
float buscar_horario_clase(Clases *array_clases, unsigned int idClase, unsigned int nclases); //LE DOY UN ID DE CLASE, ME DEVUELVE SU HORARIO ----> FUNCIONA BIEN
int buscar_mismo_horario_clase (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos, Clases *array_clases, unsigned int nclases);// ----> FUNCIONA BIEN
int buscar_mismo_horario_clase_repetido (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos, Clases *array_clases, unsigned int nclases);//----> FUNCIONA BIEN

/*FUNCIONES QUE REVISAN QUE NO TENGA EL MISMO ID DE CLASES EN MI ARRAY DE INSCRIPCIONES*/
int buscar_idclases_repetidos (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos);//LE PASO UN ARRAY DE INCRIPCIONES, BUSCA SI HAY REPETIDOS, SI ENCUENTRA, //---->FUNCIONA BIEN
int buscar_repetidos_eliminar (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos); //ESTE IGUAL, SOLO QUE RETORNA 'j' //---->FUNCIONA BIEN

/*FUNCIONES DE CONTROL Y ORGANIZACION*/
void eliminar(Inscripcion *array_inscripcion, unsigned int &cantInscriptos, unsigned int eliminar);//----> FUNCIONA LOCOOOOOOO


//void resize_clientes (Clientes *&array_clientes, int &nclientes);

#endif // FUNCAUX_H
