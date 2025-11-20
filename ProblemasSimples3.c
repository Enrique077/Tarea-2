/*Enrique Mena Hernández
programa 3*/
/*En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en d ́olares, convierta esa cantidad en pesos.
Construir el diagrama de flujo correspondiente. Tomar en cuenta que:
1dolar ↢ 11.96pesos.*/

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
