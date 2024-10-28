#include <stdio.h>
#include <string.h>

int main(){
    int len;
    char cad[20];
    
    printf("Ingrese una palabra: ");
    scanf("%s", cad);
    len=strlen(cad);
    printf("La longitud de: \'%s\' es: %d\n", cad, len);

    for(int i=0; i<len; i++){
    
        for(int j=0; j<len; j++){
            printf("*");

        }
        printf("\n");
    }

}