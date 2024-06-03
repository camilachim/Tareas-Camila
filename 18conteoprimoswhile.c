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
   while (i <= n){
    int primo = 1;
    int j = 2;
   
   //bucle para verificar si es primo
   while (j * j <= i){
    if (i % j == 0){
        primo = 0;
        break;
    }
    j++;
   }
   

    // si es primo incrementa contador
    if(primo) contador++;
    i++;
   }
    //presentar datos
    printf("Hay %d numeros primos en %d numeros\n", contador, n);
    
    return 0;
}