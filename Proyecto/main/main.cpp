#include <libreria.h>
#define NOMBRE_CSV_CLIENTES "../iriClientesGYM.csv"
#define NOMBRE_CSV_RESERVAS "../iriClasesGYM.csv"
#include <manejoArchivos.h>
int main(int argc, char *argv[]) {

    ifstream archivo_datos_clientes;
    archivo_datos_clientes.open(NOMBRE_CSV_CLIENTES);
    ifstream archivo_datos_reservas;
    archivo_datos_reservas.open(NOMBRE_CSV_RESERVAS);

    int nclientes = largo_archivo(archivo_datos_clientes);
    int nreservas = largo_archivo(archivo_datos_reservas);

    Clientes* array_clientes = new Clientes [nclientes];
    Clases* array_reservas = new Clases [nreservas];

    delete [] array_clientes;
    delete [] array_reservas;


    return 0;
}
