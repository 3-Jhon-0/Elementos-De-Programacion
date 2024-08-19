#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2;
    float prom;
    printf("Ingrese las notas de dos evaluaciones:");
    scanf("%d,%d",n1,n2);
    prom=(n1+n2)/2. ;
    printf("El promedio del alumno es: %f",prom);
    return 0;
}

