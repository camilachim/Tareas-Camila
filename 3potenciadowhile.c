#include <stdio.h>
int main(int argc, char const *argv[]){

    //Variables
    int base;
    int exponente;
    int resultado = 1;

    //ingreso de datos
    printf("Ingrese un numero: ");
    scanf("%d", &base);
    printf("Ingrese el exponente al que desea elevar: ");
    scanf("%d", &exponente);

    //variable auxiliar
    int i = 0;

    //bucle para iterar segun la condicion
    do{
        //variables auxiliares
        int acumulador = 0;
        int j = 0;

        //condicion
        while (j< resultado){
            acumulador += base;
            j++;
        }
        resultado = acumulador;
        i++;
        //condicion principal
    } while (i < exponente);

    //presentar datos
    printf("El resultado de los datos ingresados es: %d\n", resultado);
    
    return 0;
}
