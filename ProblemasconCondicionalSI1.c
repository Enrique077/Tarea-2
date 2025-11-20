
/*En un negocio de productos electrodom ́esticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el diagrama de flujo correspondiente.*/

#include <stdio.h>
int main() 
{
    float compra, descuento, pago;
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &compra);
    if (compra > 2500) 
    {
        descuento = compra * 0.08;
        pago = compra - descuento;
    } else 
    {
        pago = compra;
    }
    printf("El cliente debe pagar: %.2f\n", pago);
    return 0;
}
