#include <libreria.h>
#define NOMBRE_CSV_CLIENTES "../iriClientesGYM.csv"
#define NOMBRE_CSV_CLASES "../iriClasesGYM.csv"
#define BINARIO "asistencias_1697673600000.dat"

#include <manejoArchivos.h>
int main(int argc, char *argv[]) {

    /*ABRIMOS LOS ARCHIVOS CON LOS QUE VAMOS A TRABAJAR*/
    ifstream archivo_datos_clientes;
    archivo_datos_clientes.open(NOMBRE_CSV_CLIENTES);
    ifstream archivo_datos_clases;
    archivo_datos_clases.open(NOMBRE_CSV_CLASES);
    ifstream archivo_binario;
    infile.open(BINARIO, ios::binary);


    /*SE DECLARAN LOS ARRAYS DINÁMICOS QUE VAMOS A USAR*/
    unsigned int n_asistencias = sizeof(infile)/sizeof(Asistencia);
    unsigned int nclientes = largo_archivo(archivo_datos_clientes);
    unsigned int nclases = largo_archivo(archivo_datos_clases);

    Asistencia *array_asistencias = new Asistencia[n_asistencias];
    Clientes* array_clientes = new Clientes [nclientes];
    Clases* array_clases = new Clases [nclases];


    unsigned int i;


    /*SE LIBERA LA MEMORIA RESERVADA PARA LOS ARRAY DINÁMICOS*/
    for(i=0; i<n_asistencias;i++){

        delete [] array_asistencias[i].CursosInscriptos;

    }

    delete [] array_asistencias;
    delete [] array_clientes;
    delete [] array_clases;

    archivo_datos_clases.close();
    archivo_datos_clientes.close();
    archivo_binario.close();

    return 0;
}
