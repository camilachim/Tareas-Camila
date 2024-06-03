#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int numero;
    int resultado = 0;

    //solicitar el ingreso de numeros
    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    //bucle para encontrar la raiz
    while ((resultado * resultado * resultado) <= numero){
        resultado++;
    }
    resultado--;
    
    //presentar el resultado
    printf("El resultado es: %d\n", resultado);
    return 0;
}
