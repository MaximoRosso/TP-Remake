#include <funcAux.h>

bool identificar_menores(string fecha)
{
    string aux;

    aux = fecha.substr(6,10);

    if(aux.compare("2008") == -1)
        return true;
    else
        return false;

}

/*bool existencia_clase(string ID, int nclases)
{
    if(ID > 0 && ID < nclases)
        return true;
    else
        return false;
}*/

bool chequear_letras_nombres (string nombre_cliente)
{

    int largo_nombre = nombre_cliente.length();

    int i;

    for(i=0;i<largo_nombre;i++)
    {
        /*if(cliente_aux[i] == 'á' || cliente_aux[i]== 'é'|| cliente_aux[i]== 'í' || cliente_aux[i]== 'ó' || cliente_aux[i]== 'ú') //NO ME DETECTA LAS LETRAS CON ACENTO A PESAR Q SE LO INDICO
        {
            continue;
        }*/
        if( !(nombre_cliente[i] >= 'a' && nombre_cliente[i] <= 'z') && !(nombre_cliente[i] >= 'A' && nombre_cliente[i] <= 'Z'))
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
}//preguntar porque la alerta

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

float buscar_horario_clase(Clases *array_clases, unsigned int idClase, unsigned int nclases) //LE DOY UN ID DE CLASE, ME DEVUELVE SU HORARIO
{
   unsigned int i=0;

    for(i=0; i<nclases;i++)
    {
        if ( array_clases[i].idClase == idClase )
            return array_clases[i].horario;
    }

    if(i == nclases)
        return -1.0;
}
int buscar_mismo_horario_clase (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos, Clases *array_clases, unsigned int nclases )
{
    unsigned int i,j;

    for(i=0;i<cantInscriptos;i++)
    {
        for(j = (i+1); j < cantInscriptos; j++)
        {
            float h1,h2;
            h1 = buscar_horario_clase(array_clases,inscripciones_cliente[i].idCurso,nclases);
            h2 = buscar_horario_clase(array_clases,inscripciones_cliente[j].idCurso,nclases);

            if (h1 == h2)
                return i;// Tengo dos iguales, devuelvo 'i'

        }
    }
    if(i == cantInscriptos)
        return -1;
}
int buscar_mismo_horario_clase_repetido (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos, Clases *array_clases, unsigned int nclases)
{
   unsigned int i,j;
    for(i=0;i<cantInscriptos;i++)
    {
        for(j = (i+1); j < cantInscriptos; j++)
        {
            float h1,h2;
            h1 = buscar_horario_clase(array_clases,inscripciones_cliente[i].idCurso,nclases);
            h2 = buscar_horario_clase(array_clases,inscripciones_cliente[j].idCurso,nclases);

            if (h1 == h2)
                return j;// Igual que la funcion anterior, devuelvo 'j'

        }
    }
    if(i == cantInscriptos)
        return -1;
}
int buscar_idclases_repetidos (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos)
{
    unsigned int i,j;
    for(i = 0; i<cantInscriptos; i++)
    {
        for(j = (i+1); j < cantInscriptos; j++)
        {
            if (inscripciones_cliente[i].idCurso == inscripciones_cliente[j].idCurso)
            {
                return i;
            }

        }
    }
    return -1;
}
int buscar_repetidos_eliminar (Inscripcion *inscripciones_cliente, unsigned int cantInscriptos)
{
    unsigned int i,j;
    for(i = 0; i<cantInscriptos; i++)
    {
        for(j = (i+1); j < cantInscriptos; j++)
        {
            if (inscripciones_cliente[i].idCurso == inscripciones_cliente[j].idCurso)
            {
                return j;
            }

        }
    }
    return -1;
}
void eliminar(Inscripcion *array_inscripcion, unsigned int &cantInscriptos, unsigned int eliminar)
{
    unsigned int i;

    if (eliminar == cantInscriptos - 1)
    {
        cantInscriptos--;//si es el último, resto uno a n y listo!
        return;
    }
    //muevo las inscripciones debajo del que quiero eliminar un lugar hacia arriba tapando los datosd e l que quiero eliminar
    for (i = eliminar; i < cantInscriptos-1; i++)
    {
        array_inscripcion[i] = array_inscripcion[i + 1];
    }

    cantInscriptos--;
    return;
}
