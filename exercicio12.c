#include <stdio.h>

int main(){
    float v[5];
    float maior, menor, soma = 0, media;
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%f", &v[i]);
        soma += v[i];
    }

    maior = v[0];
    menor = v[0];

    for(i = 1; i < 5; i++){
        if(v[i] > maior){
            maior = v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }
    }

    printf("\nValores digitados:\n");
    for(i = 0; i < 5; i++){
        printf("%.2f ", v[i]);
    }

    media = soma / 5;

    printf("\n\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}