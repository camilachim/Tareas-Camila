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
    for (int i = 1; i <= n; i++){
        int factorial = 1;
        for (int j = 1; j <= i; j++){
            factorial *= j;
        }
        suma += factorial;
        printf("%d! = %d\n",i, factorial);//mostrar el factorial
    }
    //presentar resultado
    printf("La suma de factoriales %d es: %d\n",n, suma);
    
    return 0;
}
