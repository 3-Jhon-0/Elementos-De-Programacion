#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cct,cpc,ct,cp,pc,rt;
    printf("Ingrese cantidad de pasajes vendidos de clase turista y la cantidad de pasajes vendidos de primera clase: ");
    scanf("%d%d",&cct,&cpc);
    ct=cct*8800;
    cp=(8800*30)/100;
    pc=cpc*cp;
    rt=pc+ct;
    printf("La recaudacion total del vuelo es: %d", rt);
    return 0;
}
