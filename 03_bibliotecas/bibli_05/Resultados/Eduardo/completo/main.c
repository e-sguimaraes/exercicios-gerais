#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

#define MAX_LENGTH 1000

int main() {
    char str[MAX_LENGTH], str_cpy[MAX_LENGTH];
    int operation;

    scanf("%s", str);

    printf("1 - Tamanho da string\n"
           "2 - Copiar string\n"
           "3 - Converter string para letras maiusculas\n"
           "4 - Converter string para letras minusculas\n"
           "5 - Imprimir string ao contrario\n"
           "6 - Encerrar o programa\n"
           "Opcao escolhida:");

    while(1) {
        scanf("%d", &operation);
        printf("\n");

        switch(operation) {
            case 1:
                printf("Tamanho da string: %d\n\n", string_length(str));
                break;

            case 2:
                string_copy(str, str_cpy);
                printf("String copiada: %s\n\n", str_cpy);
                break;

            case 3:
                string_upper(str);
                printf("String convertida para maiusculas: %s\n\n", str);
                break;

            case 4:
                string_lower(str);
                printf("String convertida para minusculas: %s\n\n", str);
                break;

            case 5:
                string_reverse(str);
                printf("String invertida: %s\n\n", str);
                break;

            case 6:
                exit(0);

        }

        printf("1 - Tamanho da string\n"
           "2 - Copiar string\n"
           "3 - Converter string para letras maiusculas\n"
           "4 - Converter string para letras minusculas\n"
           "5 - Imprimir string ao contrario\n"
           "6 - Encerrar o programa\n"
           "Opcao escolhida:");
    }
return 0;
}