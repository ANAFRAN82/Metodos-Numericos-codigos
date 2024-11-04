#include <stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

void imprimir_factorial(int n, int i){
    if(i>0){
        printf("%d! = %d\n", i, factorial(i));
        imprimir_factorial(n, i -1);
    }
}
int main(){
    int n;
    printf("Ingrese un numero para calcular su factorial: \n");
    scanf("%d", &n);
    imprimir_factorial(n, n);
    return 0;
}