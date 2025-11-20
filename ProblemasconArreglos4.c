
/*Construir un diagrama de flujo para almacenar en un arreglo unidimen-
sional los 100 primeros n ́umeros pares. Imprimir al final el arreglo.*/

#include <stdio.h>
int main() 
{
    int A[100];
    int i = 0;
    int num = 2;
    for (i = 0; i < 100; i++) 
    {
        A[i] = num;
        num += 2;
    }
    printf("Los 100 primeros numeros pares son:\n");
    for (i = 0; i < 100; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
