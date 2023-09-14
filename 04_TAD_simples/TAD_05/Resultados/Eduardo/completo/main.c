#include <stdio.h>
#include "conta.h"
#include "usuario.h"

int main() {
    int operacao, qttContas, id, n = 0;
    float valor;
    tUsuario usuario;
    char nome[50], cpf[15];

    scanf("%d", &qttContas);
    tConta contas[qttContas];

    while(scanf("%d", &operacao) == 1) {
        switch(operacao) {

            case 0: //sair
                return 0;
            
            case 1: //saque
                scanf("%d %f", &id, &valor);
                contas[id - 1] = SaqueConta(contas[id - 1], valor);
                break;

            case 2: //deposito
                scanf("%d %f", &id, &valor);
                contas[id - 1] = DepositoConta(contas[id - 1], valor);
                break;

            case 3: //cadastro
                scanf("%s %s", nome, cpf);
                usuario = CriaUsuario(nome, cpf);
                scanf("%d", &id);
                contas[n] = CriaConta(id, usuario);
                n++;
                break;

            case 4: //relatório
                printf("===| Imprimindo Relatorio |===\n");
                for(int i = 0; i < qttContas; i++) {
                    ImprimeConta(contas[i]);
                    printf("\n");
                }
        }
    }
return 0;
}