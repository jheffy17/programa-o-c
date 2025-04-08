#include <stdio.h>

int main() {
  int numero = 4, resultado;
  resultado = numero % 2 ;

  printf("A variavél do resultado é: %d\n", resultado);

  if (numero % 2 == 0) {
    printf("O número é par\n");
  }

  return 0;
}
