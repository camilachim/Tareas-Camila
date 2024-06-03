#include <stdio.h>
int main(int argc, char const *argv[]){

    //variable
    int n;

    //solicitar n elementos de la serie
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);

    //inicializar los dos primeros numeros
    int a = 0;
    int b = 1;

    //pesentar los dos primeros numeros
    printf("%d, %d, ",a ,b);

    //bucle para iterar
    int i = 2;
    do{
        int c = a + b;
        //presentar la serie
        printf("%d, ", c);
        a = b;
        b = c;
        i++;
    } while (i < n);//condicion
    
    printf("\n");
    return 0;
}
