#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x;
    printf("Ingresa el tamano del arreglo: ");
    scanf("%d",&x);
    char* buffer=malloc(x*sizeof(char));
    printf("Ingresa los valores del arreglo: ");
    for(int i=0;i<=x;i++){
        scanf("%c", buffer+i);
    }
    printf("Valores del arreglo:");
    for(int i=0;i<=x;i++){
        printf("%c\n", *(buffer+i));
    }
    free(buffer);
    return 0;
}
