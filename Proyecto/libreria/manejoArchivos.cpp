#include <libreria.h>

unsigned int largo_archivo (ifstream &archivo_clientes)
{

    unsigned int cant_elemententos = 0;
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

    archivo_clientes.clear();
    archivo_clientes.seekg(0,ios::beg);

    return cant_elemententos;
}
void leer_archivo_binario (ifstream &archivo, Asistencia *array_asistencia, unsigned int n_asistencias)
{

    unsigned int i;
    unsigned int idCliente_aux = 0, cantInscriptos_aux = 0; //RARO PERO ME LO PIDE QT, "VARIABLES MAY NOT BE INITIALIZED"


    if(!archivo.is_open()){
        cout<<"Error al abrir el archivo"<<endl;
        return;
    }

    for(i=0; i<n_asistencias; i++)
    {
        archivo.read((char*)&idCliente_aux,sizeof(unsigned int));
        archivo.read((char*)&cantInscriptos_aux,sizeof(unsigned int));

        Inscripcion *inscripciones_aux = new Inscripcion [cantInscriptos_aux];

        (array_asistencia + i) ->cantInscriptos = cantInscriptos_aux;
        (array_asistencia + i) ->idCliente = idCliente_aux;
        (array_asistencia + i) ->CursosInscriptos = inscripciones_aux;

        i++;

    }

}
void leer_archivo_clases (ifstream &archivo, Clases *array_clases)
{
    string header;
    unsigned int i = 0;

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

    /*EXTRAIGO TODOS LOS DATOS DEL ARCHIVO*/

    while( !archivo.eof() && (getline(archivo,linea))){

        s.clear();
        s<<linea;

        getline(s,idClase_aux,delimiter);
        getline(s,nombre_aux,delimiter);
        getline(s,horario_aux,delimiter);

        /*      AGREGAR FILTROS       */
        int StoI_Id = stoi(idClase_aux);
        float StoF_h = stof(horario_aux);

        (array_clases+i)->idClase = StoI_Id;
        (array_clases+i)->nombre_clase = nombre_aux;
        (array_clases+i)->horario = StoF_h;

        i++;
    }

    /*RETORNAMOS EL INDICE AL PRINCIPIO PARA QUE AL ABRIRLO NUEVAMENTE YA ESTÉ AHI*/

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

        unsigned int StoI = stoi(id_aux);
        unsigned int EstadotoI = stoi(estado_aux);

        (array_clientes+i)->idCliente = StoI;
        (array_clientes+i)->nombre = nombre_aux;
        (array_clientes+i)->apellido = apellido_aux;
        (array_clientes+i)->email = email_aux;
        (array_clientes+i)->fechaNac = fechaNac_aux;
        (array_clientes+i)->estado = EstadotoI;

        i++;
    }

    archivo.clear();
    archivo.seekg(0,ios::beg);
}
