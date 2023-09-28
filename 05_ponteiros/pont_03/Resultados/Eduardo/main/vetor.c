#include <stdio.h>
#include "vetor.h"

void LeDadosParaVetor(int * vet, int tam) {
    for(int i = 0; i < tam; i++) {
        scanf("%d", &vet[i]);
    }
}

void ImprimeDadosDoVetor(int * n, int tam) {
    for(int i = 0; i < tam; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
}

void TrocaSeAcharMenor(int * vet, int tam, int * paraTrocar) {
    for(int *pointer = paraTrocar + 1; pointer < vet + tam; pointer++) {
        if(*paraTrocar > *pointer) {
            int aux = *pointer;
            *pointer = *paraTrocar;
            *paraTrocar = aux;
        }
    }
}

void OrdeneCrescente(int * vet, int tam) {
    for(int i = 0; i < tam; i++) {
        TrocaSeAcharMenor(vet, tam, &vet[i]);
    }
}