#include <stdio.h>
#include <stdlib.h>
 
 int main(){
    float numero=1;
    float cuadrado;
    float cubo;

    while(numero<=500){
        cuadrado=(numero*numero);
        cubo=numero*numero*numero;
        printf("Su cuadrado es: %f,", cuadrado);
        printf("Su cubo es: %f\n",cubo);
        numero ++;


    }
    system("Pause");
    return 0;

 }