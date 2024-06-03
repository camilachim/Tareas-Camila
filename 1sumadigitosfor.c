#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //Variables a utilizar en el ejercicio
    int numero;
    int suma = 0;

    //Solicitar al usuario el ingreso de una cifra para realizar el ejercicio
    printf("Ingrese una cifra: ");
    scanf("%d", &numero);

    // Bucle para realizar las iteraciones dependiendo de la condicion
    for (; numero != 0; numero /= 10){ //(;) quiere decir que no estamos inicializando una variable nueva 
        suma += numero % 10;//se asigna el valor de suma mas el modulo de numero
    }   
    //Se presenta el resultado en la pantalla
    printf("La suma de la cifra ingresada es: %d\n", suma);
    
    return 0;
}