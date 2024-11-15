#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    int i=1;
    while(i<100){
        c=i%7;
        if(c==0 ){
            printf(" ,");
        }else{
            printf("%d ,", i);
        }
        i++;
    }
    return 0;
}
