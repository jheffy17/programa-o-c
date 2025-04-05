#include <stdio.h>

    int main () {

                    //variaveis da carta 1
                    char estado1[50] ;
                    char codigoCarta1[50] ;
                    char nomeCidade1[50]  ;
                    unsigned long int populacao1 ; //unsigne= não pode ser negativo- long= grandes valores
                    float area1 ;
                    float Pib1;
                    int pontosTuristicos1 ;

           //PRINTF= imprimir SCANF=Lê dados da entrada, como caracteres do teclado 
     printf("Carta 1\n");
     printf("Digite o estado: ");
     scanf(" %s",estado1);
  
     printf("Digite o codigo da carta A-H: ");
     scanf(" %s",codigoCarta1);

     printf("Digite o nome da cidade: ");
     scanf(" %s",nomeCidade1 );

     printf("Digite a População: ");
     scanf("%d",&populacao1);

     printf("Digite a area em KM²: ");
     scanf("%f",&area1);

     printf("Digite o PIB: ");
     scanf("%f",&Pib1);

     printf("Digite a quantidade de pontos turisticos: ");
     scanf("%d",&pontosTuristicos1 );

            //Novos Atributos Carta 1

    float densidadepopulacional1 = populacao1/area1; //divisão da populaçao pela area
    float PibPerCapita1 = Pib1/populacao1; //divisão do pib pela população

         //Novos Atributos Super Poder

    float superpoder1 = ( populacao1 + area1 + Pib1 + pontosTuristicos1) + densidadepopulacional1 /1 ;

        //impressao dos dados
        printf("\n Carta 1 \n"); //apenas para indicar qual a carta
        printf("O estado é: %s\n" ,estado1);  //%s imp. uma cadeia de caracteres
        printf("O código da carta é: %s\n", codigoCarta1); 
        printf("O nome da cidade é %s\n", nomeCidade1);
        printf("A sua população é de: %d\n", populacao1); //%d imp. um numero inteiro, mas n suporta casas decimais
        printf("Sua area em KM² é de: %.2f\n", area1); //%2.f especifica as casas decimais 
        printf("Seu Pib é de: %.2f\n", Pib1); 
        printf("A quantidade de pontos turisticos é de: %d\n", pontosTuristicos1); // imp. valores inteiros nas variaveis INT
        printf("A Densidade populacional é: %f hab/km² \n" , densidadepopulacional1);
        printf("O Pib Per Capita é: %.2f R$ \n"  ,PibPerCapita1);

                    //variaveis da carta 2     
                    char estado2[50] ;
                    char codigoCarta2[50] ;
                    char nomeCidade2[50]  ;
                    unsigned long int populacao2 ; //unsigne= não pode ser negativo- long= grandes valores
                    float area2;
                    float Pib2;
                    int pontosTuristicos2 ;

          //PRINTF= imprimir SCANF=Lê dados da entrada, como caracteres do teclado 
     printf("\n Carta 2\n");
     printf("Digite o estado: ");
     scanf(" %s" ,estado2);
  
     printf("Digite o codigo da carta A-H: ");
     scanf(" %s",codigoCarta2);

     printf("Digite o nome da cidade: ");
     scanf(" %s",nomeCidade2);

     printf("Digite a População: ");
     scanf("%d",&populacao2);

     printf("Digite a area em KM²: ");
     scanf("%f",&area2);

     printf("Digite o PIB: ");
     scanf("%f",&Pib2);

     printf("Digite a quantidade de pontos turisticos: ");
     scanf("%d",&pontosTuristicos2);

        //Novos Atributos Carta 2
        
    float densidadepopulacional2 = populacao2/area2; //divisão da populaçao pela area
    float PibPerCapita2 = Pib2/populacao2; //divisão do pib pela população

         //Novos Atributos Super Poder

         float superpoder2 = ( populacao2 + area2 + Pib2 + pontosTuristicos2) + densidadepopulacional2 /1 ;
       
         printf("\n Comparação dos atributos das Cartas 1 e 2 \n");
         printf("População: %s vence\n", (populacao1 > populacao2) ? "(1) Carta 1" : (populacao2 > populacao1) ? "(0) Carta 2" : "Empate");
         printf("Area em KM²: %s vence\n", (area1 > area2) ? "(1) Carta 1" : (area2 > area1) ? "(0) Carta 2" : "Empate");
         printf("PIB: %s vence\n", (Pib1 > Pib2) ? "(1) Carta 1" : (Pib2 > Pib1) ? "(0) Carta 2" : "Empate");
         printf("Pontos Turisticos: %s vence\n", (pontosTuristicos1 > pontosTuristicos2) ? "(1) Carta 1" : (pontosTuristicos2 > pontosTuristicos1) ? "(0) Carta 2" : "Empate");
         printf("Densidade Populacional: %s vence\n", (densidadepopulacional1 < densidadepopulacional2) ? "(1) Carta 1" : (densidadepopulacional2 < densidadepopulacional1) ? "(0) Carta 2" : "Empate");
         printf("Super Poder: %s vence\n", (superpoder1 > superpoder2) ? "(1) Carta 1" : (superpoder2 > superpoder1) ? "(0) Carta 2" : "Empate");
         
         
         
            

        return 0;
    }
