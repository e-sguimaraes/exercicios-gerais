#include <stdio.h>
#include <stdlib.h>
#include "matrix_utils.h"

int main() {
    int rows1, cols1, rows2, cols2, operation, chosenMatrix, scalar;

    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1], transpose1[cols1][rows1];
    matrix_read(rows1, cols1, matrix1);
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2], transpose2[cols2][rows2];
    matrix_read(rows2, cols2, matrix2);

    printf("1 - Somar matrizes\n"
           "2 - Subtrair matrizes\n"
           "3 - Multiplicar matrizes\n"
           "4 - Multiplicacao de uma matriz por escalar\n"
           "5 - Transposta de uma matriz\n"
           "6 - Encerrar o programa\n"
           "Opcao escolhida:");

    while(1) {
        scanf("%d", &operation);
        printf("\n");

        switch(operation) {
            case 1:
                if(possible_matrix_sum(rows1, cols1, rows2, cols2)) {
                    int result[rows1][cols1];
                    matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols1, result);
                } else {
                    printf("Erro: as dimensoes da matriz nao correspondem\n\n");
                }
                break;

            case 2:
                if(possible_matrix_sub(rows1, cols1, rows2, cols2)) {
                    int result[rows1][cols1];
                    matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols1, result);
                } else {
                    printf("Erro: as dimensoes da matriz nao correspondem\n\n");
                }
                break;

            case 3:
                if(possible_matrix_multiply(cols1, rows2)) {
                    int result[rows1][cols2];
                    matrix_multiply(rows1, cols1, matrix1, rows2, cols2, matrix2, result);
                    matrix_print(rows1, cols2, result);
                } else {
                    printf("Erro: o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz\n\n");
                }
                break;

            case 4:
                scanf("%d %d", &scalar, &chosenMatrix);
                if(chosenMatrix == 1) {
                    scalar_multiply(rows1, cols1, matrix1, scalar);
                    matrix_print(rows1, cols1, matrix1);
                }
                else {
                    scalar_multiply(rows2, cols2, matrix2, scalar);
                    matrix_print(rows2, cols2, matrix2);
                }
                break;

            case 5:
                transpose_matrix(rows1, cols1, matrix1, transpose1);
                matrix_print(cols1, rows1, transpose1);
                transpose_matrix(rows2, cols2, matrix2, transpose2);
                matrix_print(cols2, rows2, transpose2);
                break;

            case 6:
                exit(0);

        }

        printf("1 - Somar matrizes\n"
           "2 - Subtrair matrizes\n"
           "3 - Multiplicar matrizes\n"
           "4 - Multiplicacao de uma matriz por escalar\n"
           "5 - Transposta de uma matriz\n"
           "6 - Encerrar o programa\n"
           "Opcao escolhida:");
    }
return 0;
}