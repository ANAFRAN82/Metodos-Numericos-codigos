#include <stdio.h>

int main() {
    int matrix[10][10];
    int *ptr = NULL;
    
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            ptr = &matrix[i][j];
            *ptr = (i+1)*(j+1);
        }
    }

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            ptr = &matrix[i][j];
            printf("%d\t", *ptr);
        }
        printf("\n");
    }
    
    return 0;
}
