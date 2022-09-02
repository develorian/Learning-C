#include <stdio.h>
/* Imprime la tabla de temperatura para grados Fahrenheit y Celsius,
    para farh = 0, 20, ..., 300 */
int main(int argc, char* argv[], char* envp[])
{
    /* ====== Declaración de variables ======*/
    /*Se coloca por lo regular al principio de la función y antes de cualquier posición ejecutable*/
    int fahr, celsius;
    int lower, upper, step;
    /* nombreDeTipo listaDeVariables; */

    /*====== Preposiciones de asignación ======*/
    /*Asignan a las variables sus valores iniciales y terminan en ; */
    lower = 0;       /* Límite inferior de la tabla de temperaturas */
    upper = 300;     /* Límite superior de la tabla de temperaturas */
    step = 20;      /* Tamaño del incremento */
    fahr = lower;

     /*===== Ciclo while =====*/
     /*Cada línea de la tabla se calcula de la misma manera por lo que se utiliza una iteración que se repite una por cada línea, por este motivo se utiliza el ciclo while*/

    while ( fahr <= upper/* condition */)
    {
        /* code */
        celsius = 5 * (fahr - 32) / 9;
        printf("| %3d°F\t|%6d°C |\n", fahr, celsius);
        fahr = fahr + step;
    }
}    