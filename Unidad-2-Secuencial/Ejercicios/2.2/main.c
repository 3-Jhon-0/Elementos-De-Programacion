#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2;
    float prom;
    printf("Ingrese la nota de una evaluacion: ");
    scanf("%d",&n1);
    printf("Ingrese la nota de otra evaluacion: ");
    scanf("%d",&n2);
    prom=(n1+n2)/2. ;
    printf("El promedio del alumno es: %0.2f",prom);
    return 0;
}

