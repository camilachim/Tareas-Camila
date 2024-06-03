#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int numero;
    int i = 2;
    int primo = 1;

    //solicitar el ingreso de un numero
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    //bucle de iteraciones
    while (i <= numero / 2){
        if (numero % i == 0){
            primo = 0;
            break;
        }
        ++i;
    }
    

    //saber si el numero es o no primo
    if (primo)
        printf("EL numero %d es primo \n",numero);
    else 
        printf("El numero %d no es primo \n", numero);
    return 0;
}
