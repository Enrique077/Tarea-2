/*Enrique Mena Hernández
programa 1*/
/*Escriba un diagrama de flujo tal que dado como datos dos n ́umeros y
calcular la suma, resta y multiplicacion de dichos numeros.*/

#include <stdio.h>
int main() 
{
    float a, b, suma, resta, multiplicacion;
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    printf("La suma es: %.2f\n", suma);
    printf("La resta es: %.2f\n", resta);
    printf("La multiplicacion es: %.2f\n", multiplicacion);
    return 0;
}
  
