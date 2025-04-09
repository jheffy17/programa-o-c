#include <stdio.h>
int main () {
  /*   int idade;

printf("Digite sua idade: \n");
scanf("%d", &idade);

// criança < 12
// adolescente >= 12 x < 18
// adulto 18 >= 18 < 60
//idoslo > 60

        if ( idade < 12) {
            printf("Você é uma criança.\n");
        } else if ( idade >= 12 && idade < 18){
            printf("Você é um adolescente.\n ");
        }
          else if( idade >= 18 && idade < 60){
            printf("Voê é um adulto.\n");
          }
          else{
            printf("Você é um idoso\n");
          }
*/

           int nota;
            printf("Digite sua nota: ");
            scanf("%d", &nota);
           //A >= 90
           //B >= 80
           //C >= 70
           //D >= 60
           //E >= 50
           //F <= 40
            if ( nota >= 90){
                printf("Conceito A!\n");
            }
            else if( nota >= 80){
                printf("Conceito B!\n");
            }
            else if( nota >= 70){
                printf("Conceito C!\n");
            }
            else if( nota >= 60){
                printf("Conceito D!\n");
            }
            else if( nota >= 50){
                printf("Conceito E!\n");
            }
            else if( nota <= 40){
                printf("Conceito F!\n");
            }
            return 0;
  }
