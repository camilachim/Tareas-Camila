#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int cifra;
    int inverso = 0;

    //ingreso de datos
    printf("Ingrese una cifra: ");
    scanf("%d", &cifra);
    
    //bucle encargado de iterar segun se cumpla la condicion
    do{
        inverso = inverso * 10 + cifra %10; //En este a inverso se asigna el valos que de en los operandos presentes
        cifra /= 10; //cifra tendra el valor de cifra dividido entre 10
    } while (cifra != 0);//condicion para la iteracion
    
    //Presentar respuestas
    printf("El inverso de la cifra ingresada es: %d\n", inverso);
    
    return 0;
}
