#include <funcAux.h>

/*
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
}*/
bool identificar_menores(string fecha)
{
    string aux;

    aux = fecha.substr(6,10);

    if(aux.compare("2008") == -1)
        return true;
    else
        return false;

}
/*bool existencia_clase(Clases clase, int nclases)
{
    if(clase.idClase > 0 && clase.idClase < nclases)
        return true;
    else
        return false;
}*/
bool chequear_letras_nombres (string cliente_aux)
{

    int largo_nombre = cliente_aux.length();

    int i;

    for(i=0;i<largo_nombre;i++)
    {
        /*if(cliente_aux[i] == 'á' || cliente_aux[i]== 'é'|| cliente_aux[i]== 'í' || cliente_aux[i]== 'ó' || cliente_aux[i]== 'ú') //NO ME DETECTA LAS LETRAS CON ACENTO A PESAR Q SE LO INDICO
        {
            continue;
        }*/
        if( !(cliente_aux[i] >= 'a' && cliente_aux[i] <= 'z') && !(cliente_aux[i] >= 'A' && cliente_aux[i] <= 'Z'))
        {
            return false;
        }
    }
    return true;

}

bool ExistenciaPersona(Clientes *array_clientes, int nclientes, string IDBuscado){
    Clientes *aux= array_clientes;// para no perder el punt de la cabeza del array
    Clientes *ultimo= (array_clientes + nclientes -1);//busco la ultima posicion del array de clases
    while(aux != ultimo){//hasta que llegue al final
        if(aux->idCliente.compare( IDBuscado) == 0 )//comparo que los ID sean iguales
            return true;//existe ese ID

        aux++;//aumento el puntero para avanzar
    }
    if( aux == ultimo)
        return false;//no existe
}

bool CuposDisponibles(){//pensarla y hacer

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
