#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pies,yarda, pulgada, cms,mts;
    printf("Ingrese una medida en pies: ");
    scanf("%f",&pies);
    yarda=pies/3 ;
    pulgada=pies*12 ;
    cms=pulgada*2.54 ;
    mts=cms/100 ;
    printf("La medida en pies ingresada exhibida en: %.2f yardas\n", yarda);
    printf("La medida en pies ingresada exhibida en: %.2f pulgadas\n", pulgada);
    printf("La medida en pies ingresada exhibida en: %.2f cms\n", cms);
    printf("La medida en pies ingresada exhibida en: %.2f mts", mts);
    return 0 ;
}
