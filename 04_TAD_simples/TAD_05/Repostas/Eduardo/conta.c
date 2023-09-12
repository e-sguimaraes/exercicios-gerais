#include <stdio.h>
#include "conta.h"
#include "usuario.h"

tConta criar_conta(int numero, tUsuario user) {
    tConta conta;
    conta.numero = numero;
    conta.user = user;
    conta.saldo = 0;
return conta;
}

void imprime_conta(tConta conta) {
    printf("Conta: %d\nSaldo: R$%.2f", conta.numero, conta.saldo);
    imprime_usuario(conta.user);
}

int comparar_numero_conta(tConta conta, int numero) {
    return conta.numero == numero;
}

tConta saque(tConta conta, float valor) {
    conta.saldo -= valor;
return conta;
}

tConta deposito(tConta conta, float valor) {
    conta.saldo += valor;
return conta;
}