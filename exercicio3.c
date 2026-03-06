#include <stdio.h>
int main(){
    float original [10];
    float quadrado [10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("digite um numero: ");
        scanf("%f", &original[i]);
    }

    for(i = 0; i < 10; i++) {
        quadrado[i] = original[i] * original[i];
    }

    printf("\nVetor original: \n");
    for(i = 0; i < 10; i++) {
        printf("%.2f", original[i]);
    }

    printf("\nVetor quadrado: \n");
    for(i = 0; i < 10; i++) {
        printf("%.2f", quadrado[i]);
    }


    return 0;
}