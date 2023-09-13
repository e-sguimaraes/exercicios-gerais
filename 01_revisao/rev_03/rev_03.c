#include <stdio.h>

void OrdenaLivros(int * livros, int quantidade) {
    int i, j, aux;
    for(i = 0; i < quantidade; i++) {
        for(j = i + 1; j < quantidade; j++) {
            if(livros[i] > livros[j]) {
                aux = livros[i];
                livros[i] = livros[j];
                livros[j] = aux;
            }
        }
    }
}

int main() {
    int quantidade, i, temCopia = 0, todosTemCopia = 1;
    scanf("%d", &quantidade);
    int livros[quantidade];
    for(i = 0; i < quantidade; i++) {
        scanf("%d", &livros[i]);
    }
    
    OrdenaLivros(livros, quantidade);

    for(i = 0; i < quantidade - 1; i++) {
        if(livros[i] == livros[i + 1]) temCopia = 1;
        if(livros[i] != livros[i + 1] && temCopia == 0) {
            printf("%d ", livros[i]);
            todosTemCopia = 0;
        } 
        else if(livros[i] != livros[i + 1] && temCopia == 1) {
            temCopia = 0;
        }
    }

    if(livros[quantidade - 2] != livros[quantidade - 1]) {
        printf("%d", livros[quantidade - 1]);
        todosTemCopia = 0;

    }
    if(todosTemCopia) printf("NENHUM");

return 0;
}