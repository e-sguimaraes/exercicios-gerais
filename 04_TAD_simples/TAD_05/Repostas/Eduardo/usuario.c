#include <stdio.h>
#include <string.h>
#include "usuario.h"

tUsuario criar_usuario(char nome[20], char cpf[15]) {
    tUsuario usuario;
    strcpy(usuario.nome, nome);
    strcpy(usuario.cpf, cpf);
return usuario;
}

void imprime_usuario(tUsuario user) {
    printf("nome: %s\nCPF: %s\n", user.nome, user.cpf);
}