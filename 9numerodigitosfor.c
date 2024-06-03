#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int numero;
    int contador = 0;

    //solicitar el ingreso de un numero
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    //bucle de iteraciones
    for (; numero != 0; numero /=10){
        contador++;
    }
    
    //mostrar resultado
    printf("El numero de digitos es: %d\n", contador);
    return 0;
}