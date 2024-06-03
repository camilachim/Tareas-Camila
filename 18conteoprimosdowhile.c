#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //variables
    int n;
    int contador = 0;
    int i = 2;

    //solicitar terminos 
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    //Bucle para iterar
    do{
        int primo = 1;
        int j = 2;
        do{
            if (i % j == 0 && i != j){
                primo = 0;
                break;
            }
            j++;
        } while (j * j <= i);      
        if (primo) contador++;
        i++;
    } while (i <= n);

    //presentar datos
    printf("Hay %d numeros primos en %dnumeros\n", contador, n);
    
    return 0;
}