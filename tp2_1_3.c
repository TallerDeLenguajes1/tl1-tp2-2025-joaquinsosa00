#include <stdlib.h>
#include <stdio.h>

int main() {
#define N 5
#define M 7
int i,j;
int mt[N][M];
int *puntero = mt;  

for(i = 0;i<N; i++)
{ 
    for(j = 0;j<M; j++)
    {
        *(puntero+i*M+j)=1+rand()%100;
        
    printf("%d ", *(puntero+i*M+j));
    }
    printf("\n");
}
}
