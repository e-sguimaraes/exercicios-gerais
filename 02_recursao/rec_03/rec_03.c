#include <stdio.h>

int EhProcurado(int num, int numeroProcurado) {
return num == numeroProcurado;
}

int ContaOcorrencias(int* vet, int numElementos, int numeroProcurado) {
    int soma = 0;
    numElementos--;
    if(numElementos < 0) return 0;
    if(EhProcurado(vet[numElementos], numeroProcurado)) {
        soma++;
    } 
    soma += ContaOcorrencias(vet, numElementos, numeroProcurado);
return soma;
}

int main() {
    int listas, qttNumeros, procurado, ocorrencias;
    scanf("%d", &listas);
    for(int i = 0; i < listas; i++) {
        scanf("%d %d", &procurado, &qttNumeros);
        int lista[qttNumeros];
        for(int j = 0; j < qttNumeros; j++) {
            scanf("%d", &lista[j]);
        }
        ocorrencias = ContaOcorrencias(lista, qttNumeros, procurado);
        printf("%d\n", ocorrencias);
    }
return 0;
}