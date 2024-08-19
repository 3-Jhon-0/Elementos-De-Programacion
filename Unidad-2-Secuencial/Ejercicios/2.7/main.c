#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,c,restc,d,u;
    printf("Ingrese un numero entero de 3 cifras: ");
    scanf("%d",&num);
    c=num/100;
    restc=num%100;
    d=restc/10;
    u=restc%10;
    printf("La centena es: %d \nLa decena es: %d \nLa unidad es: %d",c,d,u);
    return 0;
}
