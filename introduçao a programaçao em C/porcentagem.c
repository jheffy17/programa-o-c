#include <stdio.h>

int main() {
  int numero = 58, resultado;
  resultado = numero % 2 ;

  printf("A variavél do resultado é: %d\n", resultado);

  if (numero % 2 == 0) {
    printf("O número é par\n");
  } else {
    printf("O número é ímpar\n");

  }

  return 0;
}
