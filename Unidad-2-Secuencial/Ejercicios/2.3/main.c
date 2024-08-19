#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,suma,producto,resto,cociente;
    printf("Ingrese un numero entero: ");
    scanf("%d",&n1);
    printf("Ingrese otro numero entero: ");
    scanf("%d",&n2);
    suma= n1+ n2;
    producto= n1*n2;
    cociente=n1/n2;
    resto=n1%n2;
    printf("El resultado de la suma es: %d \nEl resultado del producto es: %d \nEl resultado del cociente es: %d \nEL resultado del resto es: %d", suma, producto, cociente, resto);
    return 0;
}
