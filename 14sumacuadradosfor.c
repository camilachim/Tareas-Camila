#include <stdio.h>

int main(int argc, char const *argv[]){
    
    //variables
    int n;
    int c;
    int suma = 0;

    //solicitar el ingreso de elementos
    printf("Ingrese los elementos para la suma: ");
    scanf("%d", &n);

    //Bucle de iteraciones
    suma = 0;
    for (int c = 0; c <= n; c++){
        suma += c * c;
    }
    
    //presentar resultados
    printf("La suma de los %d cuadrados es: %d\n", n, suma);

    return 0;
}
