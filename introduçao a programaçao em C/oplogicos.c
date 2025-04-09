#include <stdio.h> 
         
int main (){
    /*
    int a = -20 , b = 25;
 
    /* o operador && retorna verdadeiro só se ambas as expressões que ele conecta forem verdadeiras. Se qualquer uma das expressões for falsa, o resultado será falso.

    if ( a > 0 && b > 0) {
        printf("Ambos os numeros são positivos.\n");
    } else {
        printf("Pelo menos um dos números são negativos.\n");
    } */


    /*o operador || retorna verdadeiro se pelo menos uma das expressões que ele conecta for verdadeira. Se ambas as expressões forem falsas, o resultado será falso.

    if (a > 0 || b > 0) {
        printf("Pelo menos um número é positivo.\n");
      } else {
        printf("Os dois números são negativos.\n");
      } */



      /* o operador () ! )inverte o valor lógico de uma expressão. */
      
      int a = 5;

      if (!(a > 0)) {
        printf("A variavel é negativa\n"); /*verdadeiro*/
      } else {
        printf("A variavel é positiva.\n"); /*falso*/
      }
    
      return 0;
    }
 

