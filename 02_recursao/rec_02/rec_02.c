#include <stdio.h>

int EhPar(int num) {
return !(num%2);
}

int SomaElementosPares(int * vet, int numElementos) {
    int soma = 0;
    numElementos--;
    if(numElementos < 0) return 0;
    if(EhPar(vet[numElementos])) {
        soma = vet[numElementos] + SomaElementosPares(vet, numElementos);
    } else {
        soma = SomaElementosPares(vet, numElementos);
    }
return soma;
}

int main() {
    int qttListas, numElementos, soma;
    scanf("%d", &qttListas);
    for(int i = 0; i < qttListas; i++) {
        scanf("%d", &numElementos);
        int vet[numElementos];
        for(int j = 0; j < numElementos; j++) {
            scanf("%d", &vet[j]);
        }
        printf("%d\n", soma = SomaElementosPares(vet, numElementos));
    }
return 0;
}