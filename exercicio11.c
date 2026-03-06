#include <stdio.h>

int main(){
    float v[10];
    float somaPositivos = 0;
    int negativos = 0;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &v[i]);
    }

    for(i = 0; i < 10; i++){
        if(v[i] < 0){
            negativos++;
        } else if(v[i] > 0){
            somaPositivos += v[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}