#include <stdio.h>
int main(int argc, char const *argv[])
{
    int terminos;
    int n = 1;
    int suma = 0;

    //solicitar numero de terminos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &terminos);

    //bucle para iterar
    for (n = 1; n <= terminos; n++){
        suma +=n;
    }
    //presentar el resultado
    printf("La suma de los terminos ingresados es: %d\n", suma);
    return 0;

}
