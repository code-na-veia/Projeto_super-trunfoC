#include <stdio.h>


int main(){


    

    char estado [50]; 
    char codigo [40];
    char cidade [30];
    double populacao;
    double area;
    double pib;
    int turistico;



           printf("DESAFIO SUPER TRUNFO\n");


     printf("\nJogador: 1\n");

    printf("Digite seu estado: \n");
    scanf("%49s", estado);

    printf("Digite seu codigo: \n");
    scanf("%39s", codigo);

    printf("Digite nome da sua cidade: \n");
    scanf("%29s", cidade);

    printf("Digite a populacao: \n");
    scanf("%lf", &populacao);

    printf("Digite a area em KM: \n");
    scanf("%lf", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib);
    
    printf("Digite a quantidade pontos turisticos: \n");
    scanf("%d", &turistico);
   

    
    printf("\nCarta do jogador: 1\n");
    printf("Estado: ");
    printf("%10s \n", estado);
    printf("Codigo: ");
    printf("%3s \n", codigo);
    printf("Nome da Cidade: ");
    printf("%9s \n", cidade);
    printf("Populacao: ");
    printf("%lf \n", populacao);
    printf("Area em KM: ");
    printf("%lf \n", area);
    printf("PIB: ");
    printf("%lf \n", pib);
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

    printf("Digite seu estado: \n");
    scanf("%49s", Estado);
    

    printf("Digite seu codigo: \n");
    scanf("%39s", Codigo);
   

    printf("Digite nome da sua cidade: \n");
    scanf("%29s", Cidade);
   

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
    printf("%10s \n", Estado);
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
