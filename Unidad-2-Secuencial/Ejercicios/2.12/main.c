#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    float precio,pf;
    printf("Ingrese el precio: ");
    scanf("%f",&precio);
    printf("Ingrese codigo(0 o 1): ");
    scanf("%d",&c);
    pf=precio-(precio*c*0.20);
    printf("El precio final es: %.2f",pf);
    return 0;
}
