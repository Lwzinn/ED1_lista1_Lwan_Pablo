#include <stdio.h>

int main(){
    int v[10];
    int maior, posicao;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 0;

    for(i = 1; i < 10; i++){
        if(v[i] > maior){
            maior = v[i];
            posicao = i;
        }
    }

    printf("\nVetor:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Posicao: %d\n", posicao);

    return 0;
}