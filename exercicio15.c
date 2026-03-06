#include <stdio.h>

int main(){
    int v1[10], v2[10], inter[10];
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
        for(j = 0; j < 10; j++){
            if(v1[i] == v2[j]){
                existe = 0;

                for(int m = 0; m < k; m++){
                    if(inter[m] == v1[i]){
                        existe = 1;
                    }
                }

                if(!existe){
                    inter[k] = v1[i];
                    k++;
                }
            }
        }
    }

    printf("\nInterseccao dos vetores:\n");
    for(i = 0; i < k; i++){
        printf("%d ", inter[i]);
    }

    return 0;
}