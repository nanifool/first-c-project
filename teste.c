#include <stdio.h>

int divisao (int num1, int num2) {
  return num1 / num2;
}

void main(){
  int x=3;
  int y=15;
  y = divisao(y, x);
  printf("%d %d \n", x, y);
  x=y++;
  printf("%d %d \n", x, y);
}

// gcc teste.c -o teste (para compilar)