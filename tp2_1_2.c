// codigo a completar

#include <stdlib.h>
#include <stdio.h>

int main() {
#define N 20
int i;
double vt[N];
for(i = 0;i<N; i++)
{
vt[i]=1+rand()%100;
printf("%.0f \n ", vt[i]);
}
}
