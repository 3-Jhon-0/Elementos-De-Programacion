#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tarros,lt1,lt4,lt20;
    printf("Ingrese la cantidad de tarros de pintura: ");
    scanf("%d",&tarros);
    lt1=(tarros*50)/100;
    lt4=(tarros*30)/100;
    lt20=tarros-(lt1+lt4);
    printf("La cantidad de tarros de :\n 1 litro es %d \n 4 litros es %d \n 20 litros es %d", lt1, lt4, lt20);
    return 0;
}
