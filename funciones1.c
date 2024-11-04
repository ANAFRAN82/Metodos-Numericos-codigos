#include <stdio.h>
#include <string.h>
#include <string.h>

float maximo(float n1, float n2);
int main(){
    float n1=15,n2=35,max;
    max=maximo(n1,n2);
    system("Pause");
    return 0;

}
float maximo(float n1, float n2){
    float max;
    n1=n1+10;
    n2=n2+10;
    if(n1>n2){
        printf("El numero mayor es: %2.2f\n", n1);
    }else{
        if(n2>n1){
            printf("El numero mayor es: %2.2f\n", n2);

        }
    }
    return max;

}