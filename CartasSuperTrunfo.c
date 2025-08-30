#include <stdio.h>

    int main(){
    
  //Definindo a estrutura da primeira carta
        char estado1;
        char codigo_carta1[10];
        char nome_cidade1[30];
        int populacao1;
        float area1;
        float pib1;
        int num_pontos_turisticos1;

    //Definindo a estrutura da segunda carta
        char estado2;
        char codigo_carta2[10];
        char nome_cidade2[30];
        int populacao2;
        float area2;
        float pib2;
        int num_pontos_turisticos2;

    printf("SUPER TRUNFO\n");
  
    //Dados da primeira carta
        printf("////CARTA//// 1\n");
        printf("Forneça uma letra de 'A' a 'H' para o estado:\n");
        scanf("%c", &estado1);
        printf("Forneça o código da carta (01 ate 04):\n");
        scanf("%s", &codigo_carta1);
        printf("Forneça o nome da cidade:\n");
        scanf("%s", &nome_cidade1);
        printf("Forneça a população da cidade:\n");
        scanf("%d", &populacao1);
        printf("Forneça a área da cidade(km²):\n");
        scanf("%f", &area1);
        printf("Forneça o PIB da cidade(R$):\n");
        scanf("%f", &pib1);
        printf("Forneça o número de pontos turísticos da cidade:\n");
        scanf("%d", &num_pontos_turisticos1);

    //Dados da segunda carta
        printf("////CARTA//// 2\n");
        printf("Forneça uma letra de 'A' a 'H' para o estado:\n");
        scanf(" %c", &estado2);
        printf("Forneça o código da carta (01 ate 04):\n");
        scanf("%s", &codigo_carta2);
        printf("Forneça o nome da cidade:\n");
        scanf("%s", &nome_cidade2);
        printf("Forneça a população da cidade:\n");
        scanf("%d", &populacao2);
        printf("Forneça a área da cidade(km²):\n");
        scanf("%f", &area2);
        printf("Forneça o PIB da cidade(R$):\n");
        scanf("%f", &pib2);
        printf("Forneça o número de pontos turísticos da cidade:\n");
        scanf("%d", &num_pontos_turisticos2);

        //Exibe o resultado da carta1
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c%s\n", estado1,codigo_carta1);
        printf("Nome da cidade: %s\n", nome_cidade1);
        printf("População: %d\n", populacao1); 
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", num_pontos_turisticos1);
  
        //Exibe o resultado da carta2
        printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c%s\n", estado2,codigo_carta2);
        printf("Nome da cidade: %s\n", nome_cidade2);
        printf("População: %d\n", populacao2); 
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f\n", pib2);
        printf("Número de pontos turísticos: %d\n", num_pontos_turisticos2);

  return 0;
}
