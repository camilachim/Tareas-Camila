#include <stdio.h>
int main(int argc, char const *argv[]){

    //variables
    int base;
    int exponente;
    int resultado = 1;

    //ingreso de datos
    printf("Ingrese un numero: ");
    scanf("%d", &base);
    printf("Ingrese el exponente al que desea elevar: ");
    scanf("%d", &exponente);

    //bucle de iteraciones cumpliendo la condicion
    for (int i = 0; i < exponente; i++){
        int acumulador = 0;//variable auxiliar
        for (int j = 0; j < resultado; j++){//condicion secundaria
            acumulador += base;//asignacion a acumulador
        }
        resultado = acumulador;
    }
    //presentar en pantalla 
    printf("El resultado de los datos ingresados es: %d\n", resultado);


    return 0;
}
