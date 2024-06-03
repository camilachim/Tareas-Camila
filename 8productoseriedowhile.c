#include <stdio.h>
int main(int argc, char const *argv[]){
    
    //variables
    int n;
    int producto = 1;
    int razon = 2;
    int i = 0;
    
    //ingreso de terminos
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);

    //bucle de iteraciones
    do{
        producto *= razon;
        i++;
    } while (i < n);
    

    //presentar el reultado
    printf("El producto de los terminos es: %d\n", producto);
    
    return 0;
}
