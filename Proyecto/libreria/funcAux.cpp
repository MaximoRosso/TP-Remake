#include <funcAux.h>

bool ExistenciaNombreClase(string *Nombre, string NomBuscado){// esta funcion busca que exista el nombre de la clase que se pide
    string *ultimo= *(Nombre + nclases -1);//busco la ultima posicion del array de nombres
    while(Nombre != ultimo){//hasta que llegue al final
        if(*Nombre == NomBuscado)
            return 1;// no me acuerdo q estabamos retornando??????????????// existe ese nombre de clase

        Nombre++;//aumento el puntero para avanzar
    }
    if(Nombre == ultimo)
        return -1;//no existe
}

bool ExistenciaHorarioClase(string *horario, int horBuscado){//esta funcion busca que exista la hora de la clase que se pide
    string *ultimo= *(horario + nclases -1);//busco la ultima posicion del array de horarios
    while(horario != ultimo){//hasta que llegue al final
        if(*horario == horBuscado)
            return 1;// no me acuerdo q estabamos retornando??????????????//existe el horario -- es lo que voy a usar

        Nombre++;//aumento el puntero para avanzar
    }
    if(horario == ultimo)
        return -1;
}

int buscarCliente(Cliente id, ){
    // no se que pasarle a esta func
}