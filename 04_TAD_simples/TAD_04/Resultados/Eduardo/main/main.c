#include <stdio.h>
#include "aluno.h"

int main() {
    int qttAlunos, matricula, n1, n2, n3, i, j;
    char nome[50];

    scanf("%d", &qttAlunos);
    tAluno alunos[qttAlunos], temp;

    for(i = 0; i < qttAlunos; i++) {
        scanf("%s", nome);
        scanf("%d", &matricula);
        scanf("%d %d %d", &n1, &n2, &n3);
        alunos[i] = criar_aluno(nome, matricula, n1, n2, n3);
    }

    for(i = 0; i < qttAlunos; i++) {
        for(j = i + 1; j < qttAlunos; j++) {
            if(comparar_matricula_aluno(alunos[i], alunos[j]) == 1) {
                temp = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = temp;
            }
        }
    }

    for(i = 0; i < qttAlunos; i++) {
        if(aluno_aprovado(alunos[i])) imprimir_aluno(alunos[i]);
    }
    
return 0;
}