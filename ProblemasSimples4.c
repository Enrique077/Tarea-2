/*Enrique Mena Hernández
programa 4*/
/*Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de inter ́es mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendr ́a al finalizar el mes.*/

#include <stdio.h>
int main() 
{
    float capital, tasa, interes, montoFinal;
    printf("Ingrese el capital invertido: ");
    scanf("%f", &capital);
    printf("Ingrese la tasa de interes mensual (ej: 0.05 para 5%%): ");
    scanf("%f", &tasa);
    interes = capital * tasa;
    montoFinal = capital + interes;
    printf("El monto final al terminar el mes es: %.2f\n", montoFinal);
    return 0;
}
