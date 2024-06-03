#include <stdio.h>

int main(int argc, char const *argv[])
{
    //variables
    int n;
    int suma = 0;
    int i =2;

    //Solicitar el numero de elementos a sumar
    printf("Ingrese los elementos a sumar: ");
    scanf("%d", &n);

    //bucle de iteraciones
    for (int i = 2; i <= n; i+=2){
        suma += i;
    }
    
    //presentar resultados
    printf("La suma de los %d numeros pares es: %d\n", n, suma);
    
    return 0;
}
