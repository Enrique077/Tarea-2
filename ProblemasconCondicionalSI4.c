
/*Construir un diagrama de flujo que pueda determinar, dados dos n ́umeros
enteros, si un n ́umero es divisor del otro.*/
#include <stdio.h>

int main() 
{
    int A, B;
    printf("Ingrese el primer numero: ");
    scanf("%d", &A);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &B);
    if (A == 0 || B == 0) 
    {
        printf("No se puede dividir entre cero.\n");
        return 0;
    }
    if (B % A == 0) 
    {
        printf("%d es divisor de %d\n", A, B);
    } else if (A % B == 0) 
    {
        printf("%d es divisor de %d\n", B, A);
    } else 
    {
        printf("Ninguno es divisor del otro\n");
    }
    return 0;
}
