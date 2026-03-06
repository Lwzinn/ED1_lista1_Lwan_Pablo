#include <stdio.h>

int main(){
    int v[6];
    int i;
    int somaPares = 0;
    int qtdImpares = 0;

    for(i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("\nNumeros pares digitados:\n");
    for(i = 0; i < 6; i++){
        if(v[i] % 2 == 0){
            printf("%d ", v[i]);
            somaPares += v[i];
        }
    }

    printf("\nSoma dos numeros pares: %d\n", somaPares);

    printf("\nNumeros impares digitados:\n");
    for(i = 0; i < 6; i++){
        if(v[i] % 2 != 0){
            printf("%d ", v[i]);
            qtdImpares++;
        }
    }

    printf("\nQuantidade de numeros impares: %d\n", qtdImpares);

    return 0;
}