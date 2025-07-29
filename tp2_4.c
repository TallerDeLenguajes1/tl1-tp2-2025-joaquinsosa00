#include <stdlib.h>
#include <stdio.h>
#include <time.h>
struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};
void listarPCs(struct compu pcs[], int cantidad) ;
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);


int main() {
    
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
    printf("--------------------------\n");
    mostrarMasVeloz(computadoras,5);

    return 0;



}
 


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

    int idMasVieja=0;
        for (int i = 0; i < cantidad-1; i++) {
        if (pcs[i].anio < pcs[i+1].anio) {
            
            idMasVieja = i; // Actualizo el id de la mas vieja
            
        }
    }
    printf("La PC mas vieja es la %d con el anio %d\n", idMasVieja+1, pcs[idMasVieja].anio);
}

void mostrarMasVeloz(struct compu pcs[], int cantidad){
    int idMasVeloz=0;
    for (int i = 0; i < cantidad-1; i++) {
        if (pcs[i].velocidad > pcs[i+1].velocidad) {
            idMasVeloz = i; // Actualizo el id de la mas veloz
        }
    }
    printf("La PC mas veloz es la %d con la velocidad de %d GHz\n", idMasVeloz+1, pcs[idMasVeloz].velocidad);
}



    
    


