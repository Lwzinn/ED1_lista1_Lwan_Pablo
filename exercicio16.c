#include <stdio.h>

int main(){
    int v1[10], v2[10], uniao[20];
    int i, j, k = 0;
    int existe;

    printf("Digite 10 valores para o primeiro vetor:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &v1[i]);
    }

    printf("Digite 10 valores para o segundo vetor:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < 10; i++){
        uniao[k] = v1[i];
        k++;
    }

    for(i = 0; i < 10; i++){
        existe = 0;

        for(j = 0; j < k; j++){
            if(v2[i] == uniao[j]){
                existe = 1;
            }
        }

        if(!existe){
            uniao[k] = v2[i];
            k++;
        }
    }

    printf("\nUniao dos vetores:\n");
    for(i = 0; i < k; i++){
        printf("%d ", uniao[i]);
    }

    return 0;
}