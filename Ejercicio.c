#include <stdio.h>
#include <stdlib.h>

int main(){
    int an;
    int sueldo;
    int resul;

    puts("Antiguedad");
    scanf("%d", &an);

    if(an>=5){
    puts("Sueldo:");
    scanf("%d", &sueldo);
    resul=(sueldo*100)/10;
    if(resul>=10000){
        printf("Felicidades se aprobo tu credito: \n");
    }
    }
    system("Pause");
        
    }
