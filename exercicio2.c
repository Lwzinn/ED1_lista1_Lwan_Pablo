#include <stdio.h>

int main() {
    int v[6], i;

    for(i = 0; i < 6; i++)
        scanf("%d", &v[i]);

    for(i = 0; i < 6; i++)
        printf("%d\n", v[i]);

    return 0;
}