#include <stdio.h>
#include <string.h>

int main(){
    char palabra[30];
    char palabra2[30];
    char temp[30];
    printf("Ingrese la primera palabra ");
    scanf("%s", palabra);
    printf("Ingresa la segunda palabra ");
    scanf("%s", palabra2);

    printf("Antes: \n");
    printf("Palabra 1: %s\n", palabra);
    printf("Palabra 1: %s\n", palabra2);

    strcpy(temp, palabra);
    strcpy(palabra, palabra2);
    strcpy(palabra2, temp);

    printf("Despues\n");
    printf("Palabra 1: %s\n", palabra);
    printf("Palabra 2: %s\n", palabra2);
    return 0;

}