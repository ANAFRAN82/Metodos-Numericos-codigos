#include <stdio.h>
#include <string.h>
#define LONG_MAX 50

void leerCadena(char* cadena);
void invertirCadena(char* cadena);

void leerCadena(char* cadena){
    int i=0;
    char c;

    while((c= getchar()) != '\n' && c != ' ' && i < LONG_MAX){
        cadena[i++]=c;
    }
    cadena[i]='\0';
   
}
void invertirCadena(char* cadena){
    int longitud=strlen(cadena);

    for(int i=longitud-1;i>=0;i--){
        printf("%c", cadena[i]);
    }
    printf("\n");
}
int main(){
    char cadena[LONG_MAX];
    printf("Introduce una palabra: ");
    leerCadena(cadena);

    printf("La palabra invertida es: ");
    invertirCadena(cadena);
    return 0;


}