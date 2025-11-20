/*Enrique Mena Hernández
programa 2*/
/*construya un programa tal que dado como entrada un arreglo unidimen-
sional de enteros y un n ́umero entero, determine cu ́antas veces se encuentra
el n ́umero dentro del arreglo.*/

#include <stdio.h>
int main() 
{
    int n, X, contador = 0;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &arreglo[i]);
    }
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &X);
    for (int i = 0; i < n; i++) 
    {
        if (arreglo[i] == X) 
        {
            contador++;
        }
    }
    printf("El numero %d aparece %d veces en el arreglo.\n", X, contador);
    return 0;
}
