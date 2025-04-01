#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main() {
    struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)

 
};

void listarPCs(struct compu pcs[], int cantidad) {
   //Recorro el listado de computadoras
    for (int i = 0; i < cantidad; i++) {
        
        printf("PC %d:\n", i + 1);
        printf("  Velocidad: %d GHz\n", pcs[i].velocidad);
        printf("  Año de fabricación: %d\n", pcs[i].anio);
        printf("  Núcleos: %d\n", pcs[i].cantidad_nucleos);
        printf("  Tipo de CPU: %s\n", pcs[i].tipo_cpu);
        printf("----------------\n");  
    }
    

}
void mostrarMasVieja(struct compu pcs[], int cantidad){

        for (int i = 0; i < cantidad-1; i++) {
            if(pcs[i].anio<pcs[i+1].anio){
                printf("\n\n Hay una mas vieja");
            }
    }
    }
srand (time(NULL));
    
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu computadoras[5];  // Arreglo de 5 elementos de la estructura "compu"
    
    // Inicializando cada computadora en el arreglo
    for (int i = 0; i < 5; i++) {
        // Asignar valores aleatorios a cada campo de la estructura
        
        computadoras[i].velocidad = rand() % 3 + 1;  // Velocidad entre 1 y 3 GHz
        computadoras[i].anio = rand() % 10 + 2015;   // Año entre 2015 y 2024
        computadoras[i].cantidad_nucleos = rand() % 8 + 1;  // Núcleos entre 1 y 8
        
        int i_tipoCPU = rand() % 6;  // Generar un índice aleatorio entre 0 y 5
        computadoras[i].tipo_cpu = tipos[i_tipoCPU];  // Asignar el tipo de CPU
    }

    

    printf("--------------------------\n");
    listarPCs(computadoras,5);
    printf("--------------------------\n");
    mostrarMasVieja(computadoras,5);

    return 0;



}


