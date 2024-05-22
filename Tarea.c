/**
 * @file Tarea.c
 * @author Camila Chimbo   Primer Ciclo
 * @brief Tarea Crea un programa en C que realice las siguientes tareas:
    Declare variables de al menos tres tipos de datos diferentes.
    Use printf para mostrar un mensaje de bienvenida y para pedir al usuario que ingrese valores para las variables declaradas.
    Use scanf para leer los valores ingresados por el usuario y almacenarlos en las variables correspondientes.
    Use printf para mostrar los valores ingresados por el usuario junto con un mensaje descriptivo.
 * @version 0.1
 * @date 2024-05-21
 * @copyright Copyright (c) 2024
 */
//Funcionalidad de printf y scanf
/*Printf.- Esta funcionalidad se encarga de enviar los datos ingresados al flujo de salida estandar.
Scanf.- Esta funcionalidad se encarga de leer datos desde el teclado y los almacena en variables.*/

//Tipos de datos en C
/* int -> Entero : cualquier numero natural incluyendo los numeros enteros negativos.
float-> Decimal : Numeros con punto decimal tiene una precision simple.
double-> Decimal con Doble precision : Al igual que el flitante pero con mayor precision.
char-> Caracter : Tiene la capacidad de almacenar un solo caracter.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
   
    // Declaracion de variables

    int num1;
    float num2;
    char caracter;

    //Mensaje de bienvenida al programa e ingreso de valores.

    printf("Bienvenido te invito a participar del siguiente programa realizado para entrada y salida de datos \n");

    //Ingreso de datos por parte del usuario desde la consola.

    printf("Ingresar un numero entero: ");
    scanf("%d", &num1);
    getchar();

    printf("Ingresar un numero decimal: ");
    scanf("%f", &num2);
    getchar();

    printf("Ingresa un caracter: ");
    scanf("%c", &caracter);
    getchar();

    //Presentar los datos ingresados

    printf("Los datos que proporcionaste en el programa son los siguientes \n");
    printf("El numero entero que proporcionaste es: %d \n", num1);

    printf("El numero decimal que proporcionaste es: %.1f \n", num2);
    printf("El caracter que proporcionaste es: %c \n", caracter);

    printf("--------------------------------------------------------------------------------------------------------------------------------- \n");
    
    // Ejemplo de printf
    /* Esta funcinalidad se encarga de mostrar el texto y los datos en la pantalla etsa toma como argumentos los datos ingresados
     con un lenguaje de programacion y los presenta de una manera entendible para el usuario.*/
    printf("Bienvenidos a Teoria de la programacion \n");

    //Ejemplo de scanf
    /*Esta funcion se usa para que el usuario pueda ingresar algun tipo de dato desde el teclado el cual sera almacenada en una variable y esta cumplira 
    la funcion especificada en el codigo.*/

    int numero;
    printf("Ingresa un numero por favor: ");
    scanf("%d", &numero);
    printf("El numero que ingresaste fue: %d \n",  numero);

    printf("----------------------------------------------------------------------------------------------------------------------------------- \n");

    //Ejemplos de los tipos de datos.
    int entero;
    float decimal;
    char caractee;

    printf("Ingrese los numeros en el siguiente orden: Entero, Decimal, Caracter \n");

    scanf("%d \n", &entero);
    scanf("%f\n", & decimal);
    scanf("%c", &caractee);

    printf("Enetro : %d \n", entero);
    printf("Decimal : %.2f \n", decimal);
    printf("Caracter : %c \n", caractee);

    printf("--------------------------------------------------------------------------------------------------------------------------------- \n");
    printf("Gracias por su atencion y participacion: \n");
    
    return 0;
}
