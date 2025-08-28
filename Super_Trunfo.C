#include <stdio.h>


int main(){


    

    char estado [50]; 
    char codigo [40];
    char cidade [30];
    double populacao, area, pib1;
    int turistico;
    double dp1, PIBpc1;
     


/*
          - O que preciso fazer?

  1: Calcular a densidade populacional usando ( double/ float)
 - 2: Como fazer isso?
 
 - 3: Irei pegar a variavel população e dividir pela área da cidade
 
  4: Calcular o PIB per capita usando ( double ou float)
 - 5: como fazer isso?

 - 7: Variavel PIB e divide pela variavel População







*/




           printf("\nDESAFIO SUPER TRUNFO \n");


     printf("\nJogador: 1\n");

    printf("\nDigite seu estado: \n");
    scanf("%24s", estado);

    printf("Digite seu codigo: \n");
    scanf("%24s", codigo);

    printf("Digite nome da sua cidade: \n");
    scanf("%24s", cidade);

    printf("Digite a populacao: \n");
    scanf("%lf", &populacao);

    printf("Digite a area em KM: \n");
    scanf("%lf", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &turistico);
   

    
    printf("\nCarta do jogador 1: \n");
    printf("Estado: ");
    printf(" %10s\n", estado);
    printf("Codigo: ");
    printf(" %3s\n", codigo);
    printf("Nome da Cidade: ");
    printf(" %9s\n", cidade);
    printf("Populacao: %.0lf\n", populacao);
    printf("Area em KM: %.2lf\n", area);
    printf("PIB: %.2lf\n", pib1);
    printf("Pontos Turisticos: %d\n", turistico);

    dp1 = populacao / area;
     printf("A densidade populacional em Km² é de: %.2lf\n", dp1);

   PIBpc1 = pib1 / populacao;
    printf("O PIB Per Capita é de: %.2lf\n", PIBpc1);
    


  
   /*
          - O que preciso fazer?

  1: Calcular a densidade populacional usando ( double/ float)
 - 2: Como fazer isso?
 
 - 3: Irei pegar a variavel população e dividir pela área da cidade
 
  4: Calcular o PIB per capita usando ( double ou float)
 - 5: como fazer isso?

 - 7: Variavel PIB e divide pela variavel População







*/




    char Estado [50]; 
    char Codigo [40];
    char Cidade [30];
    double Populacao, Area, Pib;
    int Turistico;
    double DCP, PibPC;




     printf("\nJogador: 2 \n");

    printf("\nDigite seu estado: \n");
    scanf("%25s", Estado);
    

    printf("Digite seu codigo: \n");
    scanf("%25s", Codigo);
   

    printf("Digite nome da sua cidade: \n");
    scanf("%25s", Cidade);
   

    printf("Digite a populacao: \n");
    scanf("%lf", &Populacao);

    printf("Digite a area em KM: \n");
    scanf("%lf", &Area);

    printf("Digite o PIB: \n");
    scanf("%lf", &Pib);

    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &Turistico);
    




    printf("\nCarta do jogador: 2 \n");
    printf("Estado: ");
    printf(" %10s\n", Estado);
    printf("Codigo: ");
    printf(" %3s\n", Codigo);
    printf(" %9s\n", Cidade);
    printf("Populacao: %.0lf\n", Populacao);
    printf("Area em KM: %.2lf\n", Area);
    printf("PIB: %.2lf\n", Pib);
    printf("Pontos Turisticos: %d\n", Turistico);

    DCP = Populacao / Area;
     printf("A Densidade Populacional em Km² é de: %.2lf\n", dp1);

    PibPC = Pib / Populacao;
    printf("O PIB Per Capita é de: %.2lf\n", PibPC);




   return 0;
    
  } 
