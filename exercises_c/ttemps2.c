#include <stdio.h>
/* Imprime la tabla de temperatura para grados Fahrenheit y Celsius,
    para farh = 0, 20, ..., 300 */
/* En esta versión del programa, para hacerlo más preciso utilicé el tipo de datos float*/
int main(int argc, char* argv[], char* envp[])
{
    /* ====== Declaración de variables ======*/
    /*Se coloca por lo regular al principio de la función y antes de cualquier posición ejecutable*/
    float fahr, celsius;
    int lower, upper, step;
    /* nombreDeTipo listaDeVariables; */

    /*====== Preposiciones de asignación ======*/
    /*Asignan a las variables sus valores iniciales y terminan en ; */
    lower = 0;       /* Límite inferior de la tabla de temperaturas */
    upper = 300;     /* Límite superior de la tabla de temperaturas */
    step = 20;      /* Tamaño del incremento */
    fahr = lower;

    /*===== Encabezado de la tabla =====*/
    printf("==============================================\n");
    printf("Tabla de Temperaturas en °Farenheit y °Celsius\n");
    printf("==============================================\n");

     /*===== Ciclo while =====*/
     /*Cada línea de la tabla se calcula de la misma manera por lo que se utiliza una iteración que se repite una por cada línea, por este motivo se utiliza el ciclo while*/

    while ( fahr <= upper/* condition */)
    {
        /* code */
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("| %3.0f°F\t|%6.1f°C |\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("==============================================\n");
    printf("==Aquí termina la tabla comparativa °f y °C===\n");
    printf("==============================================\n");
}    