#include <stdio.h>
#include <stdlib.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. En la solución del problema se utiliza una variable
global, aunque esto, como veremos más adelante, no es muy recomendable. */

int cubo(void);             /*prototipo de funcion. */
int I;                      /* variable global */

void main(void)
{
int CUB;
for (I = 1; I <= 10; I++)
{
    CUB = cubo();           /*llamada a la funcion cubo. */
    printf("\nEl cubo de %d es: %d" , I, CUB);
}
}

int cubo(void)              /* Declaracion de la funcion. */
/* La funcion calcula el cubo de la variable global I. */
{
return (I*I*I);
}
