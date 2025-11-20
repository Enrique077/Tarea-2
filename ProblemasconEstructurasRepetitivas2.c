
/*Construya un diagrama de flujo que lea 100 numeros naturales y cuente
cuantos de ellos son positivos, negativos o nulos.*/
#include <stdio.h>

int main() {
    int numero, positivos = 0, negativos = 0, nulos = 0;
    for (int i = 1; i <= 100; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numero);
        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
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
