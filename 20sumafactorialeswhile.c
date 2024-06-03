#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //variables
    int n;
    int suma = 0;
    int i = 1;

    //solicitar el ingreso de datos
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    //calcular la suma por bucles
    while(i <= n){
        int factorial =1;
        int j = 1;

        while (j <= i){
            factorial *= j;
            j++;
        }
        suma += factorial;
        printf("%d! = %d\n", i, factorial);//mostrar los factoriales
        i++;
    }

    //presentar resultado
    printf("La suma de factoriales %d es: %d\n",n, suma);
    
    return 0;
}
