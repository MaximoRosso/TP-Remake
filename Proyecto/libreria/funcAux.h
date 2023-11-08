#ifndef FUNCAUX_H
#define FUNCAUX_H

#include <libreria.h>


bool identificar_menores(string);
bool existencia_clase(Clases, int);
bool chequear_letras_nombres (string);
bool ExistenciaPersona(Clientes, int, string);

void eliminar(Inscripcion *array_inscripcion, unsigned int &cantInscriptos, unsigned int eliminar);

int buscar_idclases_repetidos (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos);//LE PASO UN ARRAY DE INCRIPCIONES, BUSCA SI HAY REPETIDOS, SI ENCUENTRA,
int buscar_repetidos_eliminar (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos); //ESTE IGUAL, SOLO QUE RETORNA 'j'

int buscar_repetidos (int *array, int nespacios);

//void resize_clientes (Clientes *&array_clientes, int &nclientes);

#endif // FUNCAUX_H
