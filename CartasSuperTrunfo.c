#include <stdio.h>
//CARTA NUMERO 1:
int main(){
char Estado;
char Codigo_Da_Carta[20];
char Nome_Da_Cidade[25];
int Populacao;
float Area_Em_Km;
float PIB;
int Numero_De_Pontos_Turisticos;
//Informações da carta numero 1:
   printf("Digite uma letra de A a H para representar o Estado: \n");
    scanf(" %c" , &Estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s" , Codigo_Da_Carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s" , Nome_Da_Cidade);

    printf("Digite o tamanho da população: \n");
    scanf("%d" , &Populacao);

    printf("Digite a área da cidade em km: \n");
    scanf("%f" , &Area_Em_Km);

    printf("Digite o PIB da cidade: \n");
    scanf("%f" , &PIB);

    printf("Digite a quantidade de pontos túristicos: \n");
    scanf("%d" , &Numero_De_Pontos_Turisticos);

//CARTA NUMERO 2
char Estado2;
char Codigo_Da_Carta2[20];
char Nome_Da_Cidade2[25];
int Populacao2;
float Area_Em_Km2;
float PIB2;
int Numero_De_Pontos_Turisticos2;
//informações para a carta 2
   printf("Digite uma letra de A a H para representar o Estado da carta 2: \n");
    scanf(" %c" , &Estado2);

    printf("Digite o Código da Carta 2: \n");
    scanf("%s" , Codigo_Da_Carta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s" , Nome_Da_Cidade2);

    printf("Digite o tamanho da população da carta 2: \n");
    scanf("%d" , &Populacao2);

    printf("Digite a área da cidade em km da carta 2: \n");
    scanf("%f" , &Area_Em_Km2);

    printf("Digite o PIB da cidade da carta 2: \n");
    scanf("%f" , &PIB2);

    printf("Digite a quantidade de pontos túristicos da carta 2: \n");
    scanf("%d" , &Numero_De_Pontos_Turisticos2);
//Mostra informações da carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", Estado);
printf("Código: %s\n", Codigo_Da_Carta);
printf("Nome da Cidade: %s\n", Nome_Da_Cidade);
printf("População: %d\n", Populacao);
printf("Área: %.2f km\n", Area_Em_Km);
printf("PIB: %.2f Reais\n", PIB);
printf("Número de Pontos Turísticos: %d\n", Numero_De_Pontos_Turisticos);
//Mostra informações da carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", Estado2);
printf("Código: %s\n", Codigo_Da_Carta2);
printf("Nome da Cidade: %s\n", Nome_Da_Cidade2);
printf("População: %d\n", Populacao2);
printf("Área: %.2f km\n", Area_Em_Km);
printf("PIB: %.2f Reais\n", PIB2);
printf("Número de Pontos Turísticos: %d\n", Numero_De_Pontos_Turisticos2);

return 0;

}