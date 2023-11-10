#include <libreria.h>

int largo_archivo (ifstream &archivo_clientes)
{

    int cant_elemententos = 0;
    string header,linea;

    if(archivo_clientes.is_open())
    {
        cout<<"Hubo un error al abrir el archivo"<<endl; //???
        return -1;
    }
    getline(archivo_clientes,header);

    while(archivo_clientes.good())
    {
        getline(archivo_clientes,linea);
        cant_elemententos++;
    }

    archivo.clear();
    archivo.seekg(0,ios::beg);

    return cant_elemententos;
}

void leer_archivo_clases (ifstream &archivo, Clases *array_clases)
{
    string header;
    int i = 0;

    char delimiter = ',';

    string idClase_aux;
    string nombre_aux;
    string horario_aux;

    string linea;
    stringstream s;

    if(!archivo.is_open()) //Chequeo que se haya abierto bien el archivo
    {
        cout<<"Hubo un error al abrir el archivo"<<endl;
        return;
    }

    getline(archivo,header);//Me copio el header para descartarlo

    while( !archivo.eof() && (getline(archivo,linea))){

        s.clear();
        s<<linea;

        getline(s,idClase_aux,delimiter);
        getline(s,nombre_aux,delimiter);
        getline(s,horario_aux,delimiter);

        /*      AGREGAR FILTROS       */
        int StoI_Id = stoi(idClase_aux);

        (array_clases+i)->idClase = StoI_Id;
        (array_clases+i)->nombre_clase = nombre_aux;
        (array_clases+i)->horario = horario_aux;

        i++;
    }

    archivo.clear();
    archivo.seekg(0,ios::beg);

    return;
}
void leer_archivo_clientes(ifstream &archivo, Clientes *array_clientes)
{

    string header,linea;
    int i = 0;

    string id_aux;
    string nombre_aux;
    string apellido_aux;
    string email_aux;
    string telefono_aux;
    string fechaNac_aux;
    string estado_aux;
    stringstream s;

    char delimiter = ',';


    if(!archivo.is_open()) //Chequeo que se haya abierto bien el archivo
    {
        cout<<"Hubo un error al abrir el archivo"<<endl;
        return;
    }

    getline(archivo,header);

    while(!(archivo.eof()) && (getline(archivo,linea))){

        s.clear();
        s<<linea;

        getline(s,id_aux,delimiter);
        getline(s,nombre_aux,delimiter);
        getline(s,apellido_aux,delimiter);
        getline(s,email_aux,delimiter);
        getline(s,telefono_aux,delimiter);
        getline(s,fechaNac_aux,delimiter);
        getline(s,estado_aux,delimiter);

        /*       FILTROS PARA VERIFICAR SI LOS DATOS ESTAN CORRECTOS       */

        (array_clientes+i)->idCliente = id_aux;
        (array_clientes+i)->nombre = nombre_aux;
        (array_clientes+i)->apellido = apellido_aux;
        (array_clientes+i)->email = email_aux;
        (array_clientes+i)->fechaNac = fechaNac_aux;
        (array_clientes+i)->estado = estado_aux;

        i++;
    }

    archivo.clear();
    archivo.seekg(0,ios::beg);
}
