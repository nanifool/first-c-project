#include <stdio.h>

int main () 
{
  int clienteCadastro [40];
  int clienteLogin [40];
  int buscarCliente;
  int listarCliente;
  int opcao;

  printf("=========[MENU]=========\n\n");
  printf("Bem vindo!\n\n");
  printf("> Escolha uma opção:\n");
  printf("[1] Cadastro\n");
  printf("[2] Login\n");
  printf("[3] Buscar\n");
  printf("[4] Listar\n\n");
  printf("Selecione uma opção: \n\n");
  scanf("%i", &opcao);
  printf("=========[MENU]=========\n");
  
  return 0;
}