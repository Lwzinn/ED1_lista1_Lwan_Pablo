#include <stdio.h>

int main(){
    int v[10];
    int i, j;
    int repetido;

    for(i = 0; i < 10; i++){
        do{
            repetido = 0;
            printf("Digite um numero: ");
            scanf("%d", &v[i]);

            for(j = 0; j < i; j++){
                if(v[i] == v[j]){
                    repetido = 1;
                    printf("Numero repetido! Digite outro.\n");
                }
            }

        }while(repetido);
    }

    printf("\nVetor final:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    return 0;
}