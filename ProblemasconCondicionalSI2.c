
/*Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
flujo correspondiente.*/

#include <stdio.h>
int main() {
    float sueldo, aumento, sueldo_final;
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);
    if (sueldo < 1000) {
        aumento = sueldo * 0.15;
    } else {
        aumento = sueldo * 0.12;
    }
    sueldo_final = sueldo + aumento;
    printf("El sueldo final con el aumento es: %.2f\n", sueldo_final);
    return 0;
}
