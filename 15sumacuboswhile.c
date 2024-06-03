#include <stdio.h>

int main(int argc, char const *argv[]){
    
    // Variables
    int n;
    int suma = 0;
    int i = 1;

    //solicitar los terminos a sumar
    printf("Ingrese los elementos a sumar: ");
    scanf("%d", &n);

    //Bucle para iterar
    while (i <= n){
        suma += i * i * i;
        i++;
    }
    
    //presentar los resultados
    printf("La suma de los %d cubos es: %d\n",n, suma);
    return 0;
}
