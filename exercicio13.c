#include <stdio.h>

int main(){
    int v[5];
    int i;
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }

    maior = v[0];
    menor = v[0];

    for(i = 1; i < 5; i++){
        if(v[i] > maior){
            maior = v[i];
            posMaior = i;
        }

        if(v[i] < menor){
            menor = v[i];
            posMenor = i;
        }
    }

    printf("Posicao do maior valor: %d\n", posMaior);
    printf("Posicao do menor valor: %d\n", posMenor);

    return 0;
}