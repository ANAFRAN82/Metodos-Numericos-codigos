#include <stdio.h>
#include <string.h>

int main(){
    char palabra[100];
    int i,longitud,polindromo=0;
    printf("Ingrese la primera palabra: ");
    scanf("%s", &palabra);

    longitud=strlen(palabra);
    for(i=0;i<longitud;i++){
        if(palabra[i]!=palabra[longitud-i-1]){
            polindromo=1;
            break;
        }

    }
    if(polindromo==1){
        printf("%s no es una palbra palindroma ", palabra);
    }else{
        printf("%s es una palbra palindroma ", palabra);
    }
   
}
