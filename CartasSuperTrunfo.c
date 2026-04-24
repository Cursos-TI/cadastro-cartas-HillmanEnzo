#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

  // Área para entrada de dados

    // DADOS DA CARTA 1
    printf("Dados da CARTA 1 \n");

    printf("Letra do Estado 1: \n");
    scanf(" %c", &estado1);

    printf("Código da Cidade 1: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade 1: (Junto, sem espaços, EX: SaoPaulo)\n");
    scanf("%s", cidade1);

    printf("População da Cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Área da Cidade 1: \n");
    scanf("%f", &area1);

    printf("PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos na Cidade 1: \n");
    scanf("%d", &pontosTuristicos1);

    // DADOS DA CARTA 2
    printf("Dados da CARTA 2 \n");

    printf("Letra do Estado 2: \n");
    scanf(" %c", &estado2);

    printf("Código da Cidade 2: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade 2: (Junto, sem espaços, EX: SaoPaulo)\n");
    scanf("%s", cidade2);

    printf("População da Cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Área da Cidade 2: \n");
    scanf("%f", &area2);

    printf("PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos na Cidade 2: \n");
    scanf("%d", &pontosTuristicos2);


  // Área para exibição dos dados da cidade

    printf("------------------\n");
    printf("---- CARTA 1 ----\n");
    printf("------------------\n");

    printf("CARTA 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População da Cidade: %d\n", populacao1);
    printf("Área da Cidade: %2.f\n", area1);
    printf("PIB da cidade: %.2f bilhões de Reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    printf("------------------\n");
    printf("---- CARTA 2 ----\n");
    printf("------------------\n");

    printf("CARTA 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População da Cidade: %d\n", populacao2);
    printf("Área da Cidade: %.2f\n", area2);
    printf("PIB da cidade: %.2f bilhões de Reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

return 0;
} 
