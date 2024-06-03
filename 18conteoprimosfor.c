#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //variables
    int n;
    int contador = 0;

    //solicitar terminos 
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

   //Bucle para iterar
   for (int i = 2; i <= n; i++){
    int primo = 1;
   
   //bucle para verificar si es primo
   for (int j = 2; j* j <= i; j++){
    if (i % j == 0){
        primo = 0;
        break;
        }
    }

    // si es primo incrementa contador
    if(primo)contador++;
   }
    //presentar datos
    printf("Hay %d numeros primos en %d numeros\n", contador, n);
    
    return 0;
}