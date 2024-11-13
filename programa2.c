#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, suma=0;
    printf("Ingresa un numero");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        //suma +=i;
        suma=suma+i;
    }
    printf("La suma de los numeros desde 1 hasta %d ", n,suma);
}