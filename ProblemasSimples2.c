/*Enrique Mena Hernández
programa 2*/
/*Construir un diagrama de flujo tal que dado el radio de un c ́ırculo, calcule
e imprima el  ́area y la circunferencia. El  ́area del c ́ırculo se calcula como
Area = π ∗ radio2 y la circunferencia se calcula como Circunferencia =
2 ∗ π ∗ radio*/

#include <stdio.h>
#define PI 3.1416
int main() 
{
    float radio, area, circunferencia;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;
    printf("El area es: %.2f\n", area);
    printf("La circunferencia es: %.2f\n", circunferencia);
    return 0;
}
