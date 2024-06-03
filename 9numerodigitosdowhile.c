#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int numero;
    int contador = 0;

    //solicitar el ingreso de un numero
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    //bucle de iteraciones
    do{
        contador++;
        numero /= 10;
    } while (numero != 0);
    
    //mostrar resultado
    printf("El numero de digitos es: %d\n", contador);

    return 0;
}
