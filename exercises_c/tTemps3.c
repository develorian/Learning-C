#include <stdio.h>

/* IMPRIME UNA TABLA COMPARATIVA DE GRADOS FARENHEITH Y GRADOS CELSIUS (DE 0 A 300 °F*/
/* Esta es la tercera versipón del programa, pero utilizando la proposición for
    y aplicando los conocimientos de las dos versiones anteriores, encabezados,
    textos al final del programa, utilizando los datos float y determinando 
    los tamaños o magnitudes de los datos que se imprimirán con %3d y &6.1f */

int main() {

    int fahr; //Declaración de variable

    /* Encabezado de la tabla */
    printf("=============================\n");
    printf("*_TABLA COMPARATIVA °F | °C_*\n");
    printf("=============================\n");

    /* Proposición del código, utilizando for.:*/
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) // para fahr igual a 0, donde fahr sea menor o igual que 300, suma veinte a fahr.
        printf("| %3d | %6.1f |\n", fahr, (5.0 / 9.0) * (fahr - 32)); // Imprime los resultados de la operación.

    /* Mensaje final del programa. */
    printf("================\n");
    printf("     *_FIN_*     \n");
    printf("================\n");
}   