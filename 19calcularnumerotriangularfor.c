#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables 
    int n;
    int i = 1;
    int triangular = 0;

    //solicitar numero de terminos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);
    
    //bucle para iterar
    for(int i = 1; i <= n; i++){
        triangular += i;
    }
    
    //presentar resultado
    printf("En %d terminos el numero triangular es %d\n", n, triangular);
    return 0;
}
