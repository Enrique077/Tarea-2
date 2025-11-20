
/*Escribir un diagrama de flujo tal que dado como entrada un arreglo unidi-
mensional de enteros, determinar cu ́antos de ellos son positivos, negativos
o nulos.*/

#include <stdio.h>
int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    int arreglo[n];
    int positivos = 0, negativos = 0, nulos = 0;
    // Leer los elementos del arreglo
    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i+1);
        scanf("%d", &arreglo[i]);
        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }
    printf("\nPositivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);
    return 0;
}
