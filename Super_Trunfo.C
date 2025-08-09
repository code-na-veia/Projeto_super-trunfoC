#include <stdio.h>


int main(){


    

    char estado [50]; 
    char codigo [40];
    char cidade [30];
    double populacao;
    double area;
    double pib;
    int turistico;


    printf("\nJogador: 1 \n");
    printf("\nCarta : 1 \n");

    printf("Estado: ");
    scanf("%49s", estado);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf("%39s", codigo);
    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    scanf("%29s", cidade);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%lf", &populacao);
    while (getchar() != '\n');

    printf("Area em KM: ");
    scanf("%lf", &area);
    while (getchar() != '\n');

    printf("PIB: ");
    scanf("%lf", &pib);
    while (getchar() != '\n');

    printf("Pontos Turisticos: ");
    scanf("%d", &turistico);
    while (getchar() != '\n');



    
    printf("\nCarta do jogador: 1\n");
    printf("Estado: ");
    printf("%7s \n", estado);
    printf("Codigo: ");
    printf("%3s \n", codigo);
    printf("Nome da Cidade: ");
    printf("%7s \n", cidade);
    printf("Populacao: ");
    printf("%1f \n", populacao);
    printf("Area em KM: ");
    printf("%1f \n", area);
    printf("PIB: ");
    printf("%1f \n", pib);
    printf("Pontos Turisticos: ");
    printf("%.2d \n", turistico);



  





    char Estado [50]; 
    char Codigo [40];
    char Cidade [30];
    double Populacao;
    double Area;
    double Pib;
    int Turistico;




     printf("\nJogador: 2 \n");
     printf("\nCarta : 2 \n");

    printf("Estado: ");
    scanf("%49s", Estado);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf("%39s", Codigo);
    while (getchar() != '\n');

    printf("Nome da Cidade: ");
    scanf("%29s", Cidade);
    while (getchar() != '\n');


    printf("Populacao: ");
    scanf("%lf", &Populacao);
    while (getchar() != '\n');


    printf("Area em KM: ");
    scanf("%lf", &Area);
    while (getchar() != '\n');


    printf("PIB: ");
    scanf("%lf", &Pib);
    while (getchar() != '\n');


    printf("Pontos Turisticos: ");
    scanf("%d", &Turistico);
    while (getchar() != '\n');




    printf("\nCarta do jogador: 2 \n");
    printf("Estado: ");
    printf("%7s \n", Estado);
    printf("Codigo: ");
    printf("%3s \n", Codigo);
    printf("Nome da Cidade: ");
    printf("%9s \n", Cidade);
    printf("Populacao: ");
    printf("%f \n", Populacao);
    printf("Area em KM: ");
    printf("%1f \n", Area);
    printf("PIB: ");
    printf("%1f \n", Pib);
    printf("Pontos Turisticos: ");
    printf("%.2d \n", Turistico);


   return 0;
    

 }
