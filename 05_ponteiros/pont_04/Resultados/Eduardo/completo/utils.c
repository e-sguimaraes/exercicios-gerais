#include <stdio.h>
#include "utils.h"

void LeNumeros(int *array, int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }
}

void EncontraMaiorMenorMedia(int *array, int tamanho, int *maior, int *menor, float *media) {
    *maior = array[0];
    *menor = array[0];
    *media = array[0];
    for(int *pointer = array + 1; pointer < array + tamanho; pointer++) {
        if(*pointer > *maior) {
            *maior = *pointer;
        }
        if(*pointer < *menor) {
            *menor = *pointer;
        }
        *media += *pointer;
    }
    *media /= tamanho;
}