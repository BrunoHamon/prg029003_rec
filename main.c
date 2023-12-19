#include <stdio.h>
#include "hash_pessoa.h"

int main(int argc, char **argv) {

    pessoa_t pessoa;

    printf("Entre com o seu CPF: ");
    scanf("%s", &pessoa.cpf);
    printf("Entre com o seu nome: ");
    scanf("%s", &pessoa.nome);
    printf("Entre com o seu e-mail: ");
    scanf("%s", &pessoa.email);
    printf("\n");


  return 0;
}