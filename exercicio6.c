#include <stdio.h>
int main(){
    int v[10];
    int maior, menor;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }
    
    maior = v[0];
    menor = v[0];

    for(i = 0; i < 10; i++){
        if(v[i] > maior){
            maior = v[i];
        }

        if(v[i] < menor){
            menor = v[i];
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}