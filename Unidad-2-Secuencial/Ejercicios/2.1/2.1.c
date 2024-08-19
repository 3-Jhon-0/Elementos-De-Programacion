#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sueldo;
    printf("Ingrese cantidad de horas trabajadas: ");
    scanf("%d",&n1);
    printf("El valor por hora de un empleado es: ");
    scanf("%d",&n2);
    sueldo=n1*n2;
    printf("El sueldo es: %d",sueldo);
    return 0;
}
