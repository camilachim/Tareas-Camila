#include <stdio.h>

int main(int argc, char const *argv[]){

    //variables
    int n;
    int i;
    int suma = 0;

    //Solicitar cantidad de elementos
    printf("Ingrese la cantidad de elementos a sumar: ");
    scanf("%d", &n);

    //bucle para iterar
    suma = 0;
    for (int i = 1; i <= n; i++){
        if (i % 2 !=0){
            suma += i;
        }
    }
    
    //Presentar los resultados
    printf("La suma de los %d numeros impares es: %d\n",n, suma);
    
    return 0;
}
