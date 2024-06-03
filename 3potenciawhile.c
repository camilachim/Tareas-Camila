#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int base;
    int exponente;
    int resultado = 1;

    //solicitar datos
    printf("Ingrese un numero: ");
    scanf("%d", &base);
    printf("Ingrese el exponente al que desea elevar: ");
    scanf("%d", &exponente);

    int i = 0;//variable auxiliar
    //bucle de iteraciones cumpliendo la condicion
    while (i < exponente){
        //variables auxiliares
        int acumulador = 0;
        int j = 0;
        //condicion secundaria
        while (j < resultado){
            acumulador += base;
            j++;
        }
        resultado= acumulador;
        i++;
    }
    //presentacion en pantalla
    printf("El resultado de los datos ingresados es: %d\n", resultado);
    
    return 0;
}
