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
    do{
        suma += i;
        i += 2;
    } while (i <= n);

    //presentar resultados
    printf("La suma de los %d numeros pares es: %d\n", n, suma);
    
    return 0;
}
