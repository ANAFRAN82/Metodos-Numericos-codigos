#include <stdio.h>
#include <string.h>

int main(){
    int res;
    char str1[30];
    char str2[30];

    printf("Ingrese la primera palabra: ");
    scanf("%s", str1);

    printf("Ingresa la segunda palabra: ");
    scanf("%s", str2);
    res= strcmp( str1, str2 );

    if(res==0){
        printf("Ambas palabras son iguales \n", res);
    }else if(str1>str2){
        printf("La palabra %s es mayor que la palbra %s, es %d ",str1, str2, res);
    }else if(str1<str2) {
    printf("La palabra %s es mayor que la palbra %s, es %d ",str2, str1, res);
    }
    return 0;
}
