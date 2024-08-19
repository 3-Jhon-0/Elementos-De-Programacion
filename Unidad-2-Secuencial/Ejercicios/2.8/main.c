#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ddmmaa,dd,da,mm,aa,a,m,d;
    printf("Ingrese un numero entero que represente una fecha en formato ddmmaa: ");
    scanf("%d",&ddmmaa);
    dd=ddmmaa/10000;
    da=ddmmaa%10000;
    mm=da/100;
    aa=da%100;
    a=aa*10000;
    m=a+(mm*100);
    d=dd+m;
    printf("El numero ingresado en formato ddmmaa transformado a formato aammdd es: %d",d);
    return 0;
}
