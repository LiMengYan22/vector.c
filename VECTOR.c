#include <stdio.h>
int main() {
    int vector [10];
    int i;

    for (int i=0; i<10; i++){
        printf ("INSERTA VALOR: \n", i);
        scanf("%d",&vector[i]);
    }
    printf("\n-VECTOR ORIGINAL: \n");
    for (i=0; i<10; i++){
        printf("%d",vector[i]);
    }
    printf("\n\n-VECTOR INVERSO: \n");
    for (i=9; i>=0; i--){
        printf("%d",vector[i]);       
    }
    printf("\n\n");
    return 0;
}
