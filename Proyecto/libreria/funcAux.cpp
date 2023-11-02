#include <funcAux.h>

bool ExistenciaID(Clases *array_clases, int IDBuscado){// esta funcion busca que exista el nombre de la clase que se pide
    //no se que pasarle en la parte de asistencia
    int i;
    Clases *aux= array_clases;// para no perder el punt de la cabeza del array
    Clases *ultimo= *(array_clases + nclases -1);//busco la ultima posicion del array de clases
    while(aux != ultimo){//hasta que llegue al final
        if(aux->idClase == IDBuscado)
            return 1;//existe ese nombre de clase

        aux++;//aumento el puntero para avanzar
    }
    if( aux == ultimo)
        return 0;//no existe
}

int buscarCliente(Cliente id, Asistencia * ){// estoy buscando un cliente
    // no se que pasarle a esta func

}
/*
void resize_clientes (Clientes *&array_clientes, int &nclientes)
{
    nclientes++;

    Clientes *array_clientes_aux = new Clientes [nclientes];

    if(array_clientes_aux == nullptr) //Veo si tengo memoria
        return;


    for(int i = 0; i<(nclientes-1);i++)
    {
        array_clientes_aux[i] = array_clientes[i];
    }

    delete [] array_clientes;
    array_clientes = array_clientes_aux;

    return;
}
*/
