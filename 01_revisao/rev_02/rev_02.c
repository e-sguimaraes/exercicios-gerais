#include <stdio.h>

int main() {
    int i, j, n, contador = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 0; j < i; j++) {
            printf("%d ", contador);
            contador++;
        }
    printf("\n");
    }
return 0;
}