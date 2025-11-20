/*Enrique Mena Hernández
programa 1*/
/*Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.*/

#include <stdio.h>
int main() 
{
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    int suma = 0;
    // Leer los elementos del arreglo
    for (int i = 0; i < n; i++) 
    {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i]; // vamos sumando cada elemento
    }
    printf("La suma de los elementos del arreglo es: %d\n", suma);
    return 0;
}
