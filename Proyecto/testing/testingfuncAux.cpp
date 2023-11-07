#include <catch2/catch.hpp>
#include <funcAux.h>
/*
TESTCASE("Identificar menores blimblimblamblam"){

    string cumple = "23-06-2005";

    identificar_menores(cumple);

    CHECK(identificar_menores(cumple) == true);
}
TESTCASE("Chequear letras blimblimblamblam"){

    string nombre = "H0la";

    bool result = chequear_letras_nombres(nombre);

    CHECK(result == false);
}
*/

TEST_CASE("Existencia de la clase"){
    int nclases=3;
    Clases arrayClases[nclases];


    //falta el cupo q lo vamos a hacer con lo de el generaor de clientes
    arrayClases[0]={"1", "Spinning", "8"};
    arrayClases[1]={"25", "Zumba", "10"};
    arrayClases[2]={"51", "Musculacion", "15.3"};
    //inicializo mis clases

    SECTION("Existe la clase")
        bool respuesta;
        respuesta=existencia_clase(arrayClases, nclases);

    };


}


/*
bool existencia_clase(Clases clase, int nclases)// no le faltaria algo como el ID que busco?
{
    if(clase.idClase > 0 && clase.idClase < nclases)
        return true;
    else
        return false;
}*/

TEST_CASE("Existencia de la persona"){

    int nclientes=3;
    Clientes arrayclientes[3];

    //REQUIRE(nclientes>0);?????????

    arrayclientes[0] = {"1", "Agustín", "Guerra", "AgustínGuerra@bolandia.iri" ,"462-185-1730", "10-12-1966",	"0"};
    arrayclientes[1] = {"21", "Valentina", "Santos", "ValentinaSantos@bolandia.iri", "267-761-2323", "20-10-2002", "-14049"};
    arrayclientes[2] = {"49", "Brenda", "Cabrera", "BrendaCabrera@bolandia.iri", "520-861-4363", "05-07-1971", "12326"};
    //inizializo una lista de clientes
    SECTION("Existe"){
        bool resp;
        resp=ExistenciaPersona(arrayclientes[nclientes], nclientes, "21");//ingreso los datos a la func y le doy un ID existente
        CHECK(resp == true);
    }
    SECTION("No existe"){
        bool resp;
        resp=ExistenciaPersona(arrayclientes[nclientes], nclientes, "745");//ingreso los datos a la func y le doy un ID existente
        CHECK(resp == false);
    }
}
/*
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






