#include <catch2/catch.hpp>
#include <manejoArchivos.cpp>

TEST_CASE("Para el Largo de los Archivos"){

    ifstream archivo_clientes;
    ifstream archivo_datos_clientes;//declaro la variable para el archivo
    archivo_datos_clientes.open(NOMBRE_CSV_CLIENTES);//abro el archivo para poder usarlo en el testeo
    int cant_elementos;//declaro cant elementos para desp poder verificar que lo use

    SECTION("Largo de archivo existente"){

        cant_elementos=largo_archivo( archivo_datos_clientes);//le saque el ampersant
        REQUIRE(cant_elementos == 250);//necesito que sume mas de un elemento en el archivo para saber que esta sumandolos correctamente
        //250 prque considero el archivo en particular que estoy leyendo-->esta bien???????????
    }
    //CONSIDERAR CAMBIO DE FUNC PARA QUE DEVUELVA 1 SI SE PUEDE LEER LA CANT Y DESP DEVOLVER LA CANT POR DERECHA-->xq si no no sirve el test para general
    SECTION("Largo de archivo inexistente"){
        int retorno;
        retorno =largo_archivo( archivo_clientes);//no tiene nada entonces me deberia devolver el error
        REQUIRE(retorno == -1);//en caso de no existir el archivo o que no se haya podido leer, retorna -1 porque es un error
    }

}

TEST_CASE("Para el Lectura de los Archivos"){

    struct Clientes{// preg por el typedef

        unsigned int idCliente;
        string nombre;
        string apellido;
        string email;
        string telefono;
        string fechaNac;
        string estado;

    };

    Clientes* array_clientes = new Clientes [250];// por ahora lo hardcodeo poruqe el de arriba no se si funca

        SECTION("Lectura de archivo de clientes"){
            ifstream archivo_datos_clientes;

            archivo_datos_clientes.open(NOMBRE_CSV_CLIENTES);

            leer_archivo_clientes( archivo_datos_clientes,  array_clientes);

        }

        SECTION("Lectura de archivo de Clases"){

        }
}


/*
//cambiada

int leer_archivo_clientes(ifstream &archivo_clientes, Clientes *array_clientes)
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
        return -1;
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

    return 1;
}

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
*/
