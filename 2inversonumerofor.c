#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int cifra;
    int inverso = 0;

    //solicitar datos
    printf("Ingrese una cifra: ");
    scanf("%d", &cifra);
    
    //Bucle de iteraciones segun se cumpla la concicion
    for (; cifra != 0; cifra /= 10){//(;) quiere decir que no se usara una variable nueva
        inverso = inverso * 10 + cifra %10;// a inverso se le asigna el valor del resultado de las operaciones
    }
    //Se presenta datos
    printf("El inverso de la cifra ingresada es: %d\n", inverso);
    
    return 0;
}
