#include <stdio.h>
#include <string.h>
#include "usuario.h"

tUsuario CriaUsuario(char nome[20], char cpf[15]) {
    tUsuario usuario;
    strcpy(usuario.nome, nome);
    strcpy(usuario.cpf, cpf);
return usuario;
}

void ImprimeUsuario(tUsuario user) {
    printf("Nome: %s\nCPF: %s\n", user.nome, user.cpf);
}