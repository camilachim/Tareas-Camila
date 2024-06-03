#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //variables
    int n;

    //solicitar n elementos de la serie
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    //inicializar los dos primeros numeros
    int a = 0;
    int b = 1;
    int c;

    //presenta los dos primeros numerosde la serie
    printf("%d, %d, ",a , b);

    //bucle para iterar
    for (int i = 2; i < n; i++){
        c = a + b;
        //presentar la serie fibonacci
        printf("%d, ", c);
        a = b;
        b = c;
    }
    printf("\n");
    
    return 0;
}
