#include <stdio.h>
int main(){
    int v[8];
    int x, y, soma;
    int i;

    for(i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("Digite a posicao de X: ");
    scanf("%d", &x);

    printf("Digite a posicao de Y: ");
    scanf("%d", &y);

    soma = v[x] * v[y];

    printf("A soma dos valores nas posicoes %d e %d e: ", x, y, soma);

    
    return 0;
}