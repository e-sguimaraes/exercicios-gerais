#include <stdio.h>
#include "utils.h"

int TrocaInterios(int * n1, int * n2) {
    int aux;
    if(*n1 > *n2) {
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
        return 1;
    }
    else {
        return 0;
    }
}