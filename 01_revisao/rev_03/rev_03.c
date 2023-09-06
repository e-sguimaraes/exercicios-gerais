//Esse código está errado, ainda falta corrigir os casos em que nenhum livro precisa de cópia e o acesso indevido de posição de memória na varredura.
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
    int quantidade, i, temCopia = 0;
    scanf("%d", &quantidade);
    int livros[quantidade];
    for(i = 0; i < quantidade; i++) {
        scanf("%d", &livros[i]);
    }
    OrdenaLivros(livros, quantidade);
    for(i = 0; i < quantidade; i++) {
        if(livros[i] == livros[i + 1]) temCopia = 1;
        if(livros[i] != livros[i + 1] && temCopia == 0) {
            printf("%d ", livros[i]);
        } 
        else if(livros[i] != livros[i + 1] && temCopia == 1) {
            temCopia = 0;
        }
    }
return 0;
}