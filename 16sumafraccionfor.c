#include <stdio.h>

int main(int argc, char const *argv[]){
    
    //variables
    int n;
    double suma = 0.0;
    
    //solicitar terminos a sumar
    printf("Ingrese numero de terminos a sumar: ");
    scanf("%d", &n);

    //Bucle a iterar
    for(int i = 0; i < n; i++){
        if (i > 0){
            printf("+");
        }
        suma += 1.0 / (i+1);
        printf("1/%d", i +1);
    }
    
    //presentar datos
    printf("\nLa suma de los terminos ingresados es: %.2f\n", suma);
    return 0;
}