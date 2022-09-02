# 🖥️ LENGUAJE C - NOTAS 📔

## Fuentes.

* libros 📚

    * El lenguaje de programación C - 2da. ed. Ed Kernigham.
    * "Fundamentos de programación. Piensa en C" - 1ra. ed Osvaldo Cairó Battistutti
	
____
	
## El lenguaje de programación C - 2da. ed. Ed Kernigham.

## Personajes:

* Programadores (ANSI - simplificado)
* Compiladores (ANSI - de lleno)
* Implantadores (apéndice B)

## Apuntes:

El **lenguaje C**, se define en el ANSI (America National Standards Institute).

* **Apéndice A** - referencia del standard ANSI simplificado (para programadores). 
* **Apéndice B** - posibilidades de la biblioteca estándar (referencia para programadores).

____

**C** ofrece un control de flujo franco, y lineal:
* Condiciones
* Ciclos
* Agrupamientos
* Subprogramas

Pero no:
* Multiprogramación
* Operaciones paralelas
* Sincronización
* Cor-rutinas

____

Se requiere saaber de: 
* computadoras, 
* compilación, 
* significado de expresiones como: n = n + 1, 
* estructuras de datos y 
* algoritmos.

En este libro (El lenguaje de programación C - 2da. ed. Ed Kernigham) no se menciona, pero sí en el de "Fundamentos de programación. Piensa en C" - 1ra. ed Osvaldo Cairó Battistutti (Profesor investigador del ITSM).

## Las bases para escribir programas útiles. 😄

* Variables y constantes
* Aritmética
* Control de flujo
* Funciones
* Rudimentos de entrada y salida
* Características de C para escribir programas grandes "No se incluyen en el libro fuente":
    * Apuntadores
    * Estructuras
    * Conjunto de operadores de C
    * Varias proposiciones para el control de flujo
    * Biblioteca estándar.
    
    Estas podrían considerarse para programadores más experimentados.
    
/* Imprima las palabras:

hola mundo
*/

Código:    

    #include <stdio.h>
    main()
    {
        printf("hola mundo\n");
    }

En la terminal:

$ gcc nombre.c -o nombre
$ ./nombre

hola mundo

----

## Principios

Un programa en C (sin importar su tamaño), consta de: **funciones** y **variables**.

### Función:

Continen **preposiciones** --> Que especifican las operaciones de cálculo que va a realizar.

### Variables:

Almacenan los **valores** --> Utilizados durante los cálculos.
____

### Función --> main()

El programa comienza a ejecutarse al principio de **main()**. Todo programa debe tener un main en algún sitio.

### #include <stdio.h>

Indica al compilador que debe incluir información acerca de la biblioteca de entrada/salida.

Un **método** para comunicar **datos** entre funciones, es que la función que llama proporciona una lista de valores, llamados: ***"ARGUMENTOS"***, a la función que está invocando. Estos argumentos van encerrados dentro de los *paréntesis()* que están después del nombre de la función.

Cuando una función contiene los paréntesis sin argumentos, se dice que no espera argumentos. como en este caso:

    main()

Aquí describo brevemente cómo se conforma por cada línea de código:

    #include <stdio.h> // Incluye información sobre la biblioteca estándar.

    main() // Define a una función llamada main que no recibe valores de argumentos.

    { 
        // Las proposiciones están encerradas entre llaves.

        printf("hola mundo\n"); // main llama a la función de biblioteca printf, para escribir la secuencia de caracteres;

        // \n --> representa el caracter de nueva línea. (esto es una secuencia de escape y ólo representa un caracter).
    }

## Secuencia de escape: 

## \n
Proporciona un mecanismo general y extensible para representar caracteres invisibles o difíciles de escribir.

## \t
Tabulación

## \b
Retroceso

## Dos veces \ --> \ \
Diagonal invertida

































