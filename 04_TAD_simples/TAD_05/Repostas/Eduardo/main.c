#include <stdio.h>
#include "conta.h"
#include "usuario.h"

int main() {
    int operacao, qttContas, id;
    float valor;
    tUsuario usuario;

    scanf("%d", &qttContas);
    tConta contas[qttContas];

    while(scanf("%d", &operacao) == 1);
        switch(operacao) {

            case 0: //sair
                return 0;
            
            case 1: //saque
                scanf("%d %f", &id, &valor);
                contas[id - 1] = saque(contas[id - 1], valor);
                break;

            case 2: //deposito
                scanf("%d %f", &id, &valor);
                contas[id - 1] = deposito(contas[id - 1], valor);
                break;

            case 3: //cadastro
                scanf("%s %s", nome, cpf);
                usuario = criar_usuario(nome, cpf)
                scanf("%d", &id);
                criar_conta(id, usuario)
                break;

            //INCOMPLETO
            
        }
return 0;
}