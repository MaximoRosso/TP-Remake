#include <libreria.h>
#define NOMBRE_CSV_CLIENTES "../iriClientesGYM.csv"
#define NOMBRE_CSV_CLASES "../iriClasesGYM.csv"
#include <manejoArchivos.h>
int main(int argc, char *argv[]) {

    ifstream archivo_datos_clientes;
    archivo_datos_clientes.open(NOMBRE_CSV_CLIENTES);
    ifstream archivo_datos_clases;
    archivo_datos_clases.open(NOMBRE_CSV_CLASES);

    unsigned int nclientes = largo_archivo(archivo_datos_clientes);
    unsigned int nclases = largo_archivo(archivo_datos_clases);

    Clientes* array_clientes = new Clientes [nclientes];
    Clases* array_clases = new Clases [nclases];

    delete [] array_clientes;
    delete [] array_clases;

    archivo_datos_clases.close();
    archivo_datos_clientes.close();

    return 0;
}
