#include <stdio.h>
#include <string.h>

int main(){
    int len;
    char palabra1[30];
    char palabra2[30];
    char concatenar[100];

    printf("Ingrese la primera palabra ");
    scanf("%s", palabra1);

    printf("Ingresa la segunda palabra ");
    scanf("%s", palabra2);
    len=strlen(palabra1);

    strcpy(concatenar, palabra2);
    for(int i=1;i<len; i++){
        strcat(concatenar, palabra2);
    }
    printf("La concatenacion es: %s%s\n ", palabra1, concatenar);
    return 0;
}
