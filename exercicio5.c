#include <stdio.h>
int main(){
    int v[10];
    int cont = 0;
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    for(i= 0; i < 10; i++){
        if(v[i] % 2 == 0){
            cont++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", cont);

    return 0;
}