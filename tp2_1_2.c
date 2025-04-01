// codigo a completar

#include <stdlib.h>
#include <stdio.h>

int main() {
#define N 20
int i;
    double vt[N];

    
    double *puntero = vt;  

    for(i = 0; i < N; i++) {
        *(puntero + i) = 1 + rand() % 100;  
        printf(" -  %.0f \n",*(puntero + i));  
    }

    return 0;
}
