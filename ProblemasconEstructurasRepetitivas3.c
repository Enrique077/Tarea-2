/*Enrique Mena Hernández
programa 3*/
/*Hacer un diagrama de flujo que calcule la suma de los n ́umeros pares
comprendidos entre el 10 y 50.*/

#include <stdio.h>
int main() 
{
    int suma = 0;
    for (int numero = 10; numero <= 50; numero++) 
    {
        if (numero % 2 == 0) 
        {
            suma += numero;
        }
    }
    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);
    return 0;
}
