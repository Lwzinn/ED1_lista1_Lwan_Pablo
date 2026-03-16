#include <stdio.h>

int main(){
    int v[6];
    int i;

    for(i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    printf("\nValores na ordem inversa:\n");

    for(i = 5; i >= 0; i++){
        printf("%d ", v[i]);
    }

    return 0;
}
