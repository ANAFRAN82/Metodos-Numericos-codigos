#include <stdio.h>
#include <stdlib.h>

int main(){
    //Fraccion 1
    double a=3;
    double b=30;
    double c=23;
    double e;

    //Fraccion 2
    double g=5;
    double h=2;
    double i=1;
    double d=4;
    double z;

    e=((i/a)+ (a/g)+ (i/b)/(c/b));
    printf("El resultado de la fraccion 1 es: %f \n",e);
    z=((g+(h/(i/(i+(h/(h-(i/d))))))));
    printf("El resultado de la fraccion 2 es: %f \n",z);
    system("Pause");
    return 0;
}
