#include <libreria.h>
#define NOMBRE_CSV_CLIENTES "../iriClientesGYM.csv"
#define NOMBRE_CSV_RESERVAS "../iriClasesGYM.csv"

int main(int argc, char *argv[]) {

    ifstream archivo_datos_clientes;
    archivo_datos_clientes.open(NOMBRE_CSV_CLIENTES);
    ifstream archivo_datos_reservas;
    archivo_datos_reservas.open(NOMBRE_CSV_RESERVAS);



    return 0;
}
