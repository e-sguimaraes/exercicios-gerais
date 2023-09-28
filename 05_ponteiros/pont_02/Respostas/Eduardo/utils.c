#include <stdio.h>

void LeIntervalo(int * m, int * n) {
    scanf("%d %d", m, n);
}

int EhPrimo(int n) {
    int cont = 0;
    for(int i = 1; i <= n; i++) {
        if(!(n%i)) cont++;
    }
    if(cont <= 2) {
        return 1;
    }
    else {
        return 0;
    }
}

void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior) {
    int cont = 0;
    for(int i = m; i <= n; i++) {
        if(EhPrimo(i)) {
            if(!cont) {
                *menor = i;
            }
            *maior = i;
            cont++;
        }
    }
}