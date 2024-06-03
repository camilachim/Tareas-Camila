#include <stdio.h>
int main(int argc, char const *argv[])
{
  //Variables a utilizar en el ejercicio
    int cifra;
    int suma = 0;

    //Solicitar al usuario el ingreso de una cifra para realizar el ejercicio
    printf("Ingrese una cifra: ");
    scanf("%d", &cifra);

    //bucle para realzar las iteraciones necesadias para encontrar el resultado
    do{
      suma += cifra %10;// Aqui se realiza la asignacion y suma entre las variables
      cifra /= 10; //En este se procede a dividir la cifra entre 10 y asignar el resultado 
    } while (cifra != 0);//en este se especifica que la condicion para este bucle es que la cifra debe ser diferente de cero
    
    //Se presenta en pantalla los resultados
    printf("La suma de los digitos ingresados es: %d\n", suma);
    

    return 0;
}
