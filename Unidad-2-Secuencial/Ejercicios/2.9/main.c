#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kb,mb,gb,tb;
    printf("Ingrese un valor expresado en Kibibyte(KiB): ");
    scanf("%f",&kb);
    mb=kb/1024;
    gb=mb/1024;
    tb=gb/1024;
    printf("El valor expresado en KiB su equivalente:\nEn Mib es %f \nEn GiB es %f \nEn TiB es %f",mb,gb,tb);
    return 0;
}
