#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e1,n1,a1,n2,a2,n3,n4,s1,n5,n6,s2;
    printf("Ingrese un numero entero de 4 cifras positivo: ");
    scanf("%d",&e1);
    n1=e1/1000;
    a1=e1%1000;
    n2=a1/100;
    a2=a1%100;
    n3=a2/10;
    n4=a2%10;
    s1=n1+n2+n3+n4;
    n5=s1/10;
    n6=s1%10;
    s2=n5+n6;
    printf("El numero de 1 cifra resultante del numero ingresado %d es: %d",e1,s2);
    return 0;
}
