#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //variables
    int n1;
    int n2;
    int mcd;

    //solicitar el ingreso de dos numeros
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);

    //bucle para iterar
    mcd = 1;
    int k = 1;
    while (k <= n1 && k <= n2){
        if (n1 % k == 0 && n2 % k == 0){
            mcd = k;
        }
        k++;
    }
    //presentar resultado
    printf("El MCD de %d y %d es %d\n", n1, n2, mcd);
    return 0;
}
    