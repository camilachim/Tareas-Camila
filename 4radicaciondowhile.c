#include <stdio.h>

int main(int argc, char const *argv[]){

    //variables
    int numero;
    int resultado = 0;

    //solicitar numero
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    //Bucle para iterar
    do{
        resultado++;
    } while ((resultado * resultado * resultado) <= numero);
    
    resultado--;

    //presentar el resultado
    printf("El resultado es: %d\n", resultado);
    return 0;
}
