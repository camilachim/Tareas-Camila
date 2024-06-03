#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables 
    int numero;
    int suma =0;
    
    //solicita al usuario ingresar los datos
    printf("Ingrese la cifra: ");
    scanf("%d", &numero);
    
    //bucle para  las iteraciones segun la condicion dada
    while (numero !=0){
        suma += numero % 10;//se asigna el valor de suma mas el modulo de numero
        numero /= 10; //Asigna a numero el resultado de numero dividido entre 10
    }

    //se presenta el resultado en pantalla
    printf("La suma de los digitos es : %d\n", suma);

    return 0;
}
