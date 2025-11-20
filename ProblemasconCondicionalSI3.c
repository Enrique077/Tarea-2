/*Enrique Mena Hernández
programa 3*/
/*Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambi ́en se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.*/

#include <stdio.h>
int main() {
    float distancia_ida, distancia_total, precio_normal, descuento, precio_final;
    int dias;
    printf("Ingrese la distancia de ida (km): ");
    scanf("%f", &distancia_ida);
    printf("Ingrese los dias de estancia: ");
    scanf("%d", &dias);
    distancia_total = distancia_ida * 2;
    precio_normal = distancia_total * 0.23;
    if (dias > 7 && distancia_total > 800) 
    {
        descuento = precio_normal * 0.30;
    } else 
    {
        descuento = 0;
    }
    precio_final = precio_normal - descuento;
    printf("El precio final del ticket ida y vuelta es: %.2f\n", precio_final);
    return 0;
}
