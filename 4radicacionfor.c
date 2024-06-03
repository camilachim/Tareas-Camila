#include <stdio.h>
int main(int argc, char const *argv[]){

    //Variables
    int numero;
    int resultado = 0;

    //ingresar el numero para la raiz
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    //Bucle para las iteraciones
    for (resultado = 0; (resultado * resultado * resultado) <= numero; resultado++);

    resultado --;

    //presentar el resultado
    printf("la raiz cubica es: %d\n", resultado);

    return 0;
}