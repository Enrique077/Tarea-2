/*Enrique Mena Hernández
programa 1*/
/*Haga un diagrama de flujo para obtener la tabla de multiplicar de un
n ́umero entero N, comenzando desde el 1.*/

#include <stdio.h>
int main() 
{
    int N, i = 1;
    printf("Ingrese un numero entero: ");
    scanf("%d", &N);
    while (i <= 10) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
        i++;
    }
    return 0;
}
