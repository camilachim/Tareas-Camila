#include <stdio.h>
int main(int argc, char const *argv[]){

    //variable
   int n;

   //solicitar los n elementos
   printf("Ingrese la cantidad de elementos para la serie: ");
   scanf("%d", &n);

   //inicializar los dos primeros terminos
   int a = 0;
   int b = 1;

   //presentar los dos primeros numeros
   printf("%d, %d, ",a , b);

    //bucle para iterar
    int i = 2;
    while (i < n){
        int c = a + b;

        //presentar la serie
        printf("%d, ", c);
        a = b;
        b = c;
        i++;
    }
    printf("\n");
    return 0;
}
