#include <stdio.h>

int main(int argc, char const *argv[]){
    
    // Variables
    int n;
    int suma = 0;

    //solicitar los terminos a sumar
    printf("Ingrese los elementos a sumar: ");
    scanf("%d", &n);

    //Bucle para iterar
    for (int i = 1; i <= n; i++){
        suma += i * i * i;
    }
    
    
    //presentar los resultados
    printf("La suma de los %d cubos es: %d\n",n, suma);
    return 0;
}
