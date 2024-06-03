#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //variables
    int numero;
    int factorial = 1;
    int n = 1;

    //solicitar el ingreso de un numero
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    //bucle para iterar
    while (n <= numero){
        factorial *= n;
        n++;
    }
    //presentar resultado
    printf("El factorial del numero %d es: %d\n", numero, factorial);

    return 0;
}
