#include <stdio.h>

int main(int argc, char const *argv[]){
    
    //variables
    int n;
    double producto = 1.0;
    int i = 0;

    //solicitar terminos a multiplicar
    printf("Ingrese numero de terminos para calcular el producto: ");
    scanf("%d", &n);

    //Bucle a iterar
    do{
        if (i > 0){
            printf("*");
        }
        
        producto *= 1.0 / (i+1);
        printf("1/%d", i +1);
        i++;
    } while (i < n);
    
    //presentar datos
    printf("\nEl producto de los terminos ingresados es: %.2f\n", producto);
    return 0;
}