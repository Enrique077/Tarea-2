/*Enrique Mena Hernández
programa 4*/
/*Hacer un diagrama de flujo que calcule e imprima el producto de los N
primeros n ́umeros naturales.*/

#include <stdio.h>
int main() 
{
    int N, producto = 1;
    printf("Ingrese el valor de N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) 
    {
        producto *= i;
    }
    printf("El producto de los %d primeros numeros naturales es: %d\n", N, producto);
    return 0;
}
