#include <libreria.h>

int largo_archivo (ifstream &archivo_clientes)
{

    int cant_elemententos = 0;
    string header,linea;

    if(!*(archivo_clientes).is_open())
    {
        cout<<"Hubo un error al abrir el archivo"<<endl; //???
        return -1;
    }
    getline(*(archivo_clientes),header);

    while(*(archivo_clientes).good())
    {
        getline(*(archivo_clientes),linea);
        cant_elemententos++;
    }

    return cant_elemententos;

}

void leer_archivo_clientes(ifstream &archivo_clientes, Clientes *array_clientes)
{
    string header;
    int i = 0;

    string id_aux;
    string nombre_aux;
    string apellido_aux;
    string email_aux;
    string telefono_aux;
    string fechaNac_aux;
    string estado_aux;

    char delimiter = ',';

    if(!*(archivo_clientes).is_open()) //Chequeo que se haya abierto bien el archivo
    {
        cout<<"Hubo un error al abrir el archivo"<<endl;
        return;
    }
    getline(*(archivo_clientes),header); //Me copio el header característico de los .csv para desecharlo

    //*archivo_clientes>>id_aux>>delimiter>>nombre_aux>>delimiter>>apellido_aux>>delimiter>>email_aux>>delimiter>>telefono_aux>>delimiter>>fechaNac_aux>>delimiter>>delimiter>>estado_aux>>

    while( *(archivo_clientes).good() )
    {
        //PODRIA FALLAR SI ME PONEN UN ESPACIO, USAR ISTREAMSTRING
        archivo_clientes>>id_aux>>delimiter>>nombre_aux>>delimiter>>apellido_aux>>delimiter>>email_aux>>delimiter>>telefono_aux>>delimiter>>fechaNac_aux>>delimiter>>estado_aux;
        //SE PODRIA AGREGAR UN FILTRO PARA SABER SI LOS DATOS ESTAN BIEN O MAL
        // if(id_aux > 0)?
        (array_clientes+i)->idCliente = id_aux;

        (array_clientes+i)->nombre = nombre_aux;
        (array_clientes+i)->apellido = apellido_aux;
        (array_clientes+i)->email = email_aux;
        (array_clientes+i)->telefono = telefono_aux
                                         (array_clientes+i)->fechaNac = fechaNac_aux;
        (array_clientes+i)->estado = estado_aux;


        i++;

    }

    return;
}

void leer_archivo_reservas (ifstream &archivo, Clases *array_reservas)
{
    string header;
    int i = 0;

    char delimiter = ',';

    string idClase_aux;
    string nombre_aux;
    string horario_aux;



    if(!*(archivo).is_open()) //Chequeo que se haya abierto bien el archivo
    {
        cout<<"Hubo un error al abrir el archivo"<<endl;
        return;
    }

    getline(*(archivo),header);//Me copio el header para descartarlo


    while(*(archivo).good()){

        archivo_reservas>>idClase_aux>>delimiter>>nombre_aux>>delimiter>>horario_aux;

        //SE PODRIA AGREGAR UN FILTRO PARA SABER SI LOS DATOS ESTAN BIEN O MAL

        (array_reservas+i)->idClase = idClase_aux;
        (array_reservas+i)->nombre_clase = nombre_aux;
        (array_reservas+i)->horario = horario_aux;

        i++;
    }

    return;
}
