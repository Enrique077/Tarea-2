/*Enrique Mena Hernández
programa 3*/

#include <stdio.h>

int main() 
{
    float dolares, pesos;
    printf("Ingrese la cantidad en dolares: ");
    scanf("%f", &dolares);
    pesos = dolares * 11.96;
    printf("La cantidad en pesos es: %.2f\n", pesos);
    return 0;
}
