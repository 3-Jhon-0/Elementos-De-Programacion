#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emp,d,u,vd,vu,vt;
    printf("Ingrese cantidad de empanadas: ");
    scanf("%d",&emp);
    d=emp/12;
    u=emp%12;
    vd=d*300;
    vu=u*30;
    vt=vd+vu;
    printf("El valor total a abonar es: %d",vt);
    return 0;
}
