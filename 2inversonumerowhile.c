#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int cifra;
    int inverso = 0;

    //Solicitar datos
    printf("Ingrese una cifra: ");
    scanf("%d", &cifra);
    
    //Bucle de iteraciones segun la condicion
    while (cifra != 0){
        inverso = inverso * 10 + cifra %10;// a inverso se le asigna el valor del resultado de las operaciones
        cifra /= 10;//Cifra se le asigna el valor de la divicion de la misma entre 10
    }
    
    //presentar resultados
    printf("El inverso de la cifra ingresada es: %d\n", inverso);
    
    return 0;
}
