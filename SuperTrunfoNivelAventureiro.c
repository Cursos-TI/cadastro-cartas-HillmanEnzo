#include <stdio.h>

int main (){
    // 1. Variáveis da carta 1
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // VARIÁVEIS NOVAS: Para guardar os resultados dos cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ==========================================
    // 2. Dados da carta 1
    // ==========================================
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

    printf("PIB da cidade 1 (em bilhões, ex: 699.28): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos na Cidade 1: \n");
    scanf("%d", &pontosTuristicos1);

    // MÁGICA ACONTECENDO AQUI (Cálculos Carta 1)
    densidade1 = populacao1 / area1;
    // Multiplicamos por 1 bilhão (1000000000.0) para converter o valor antes de dividir
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 


    // ==========================================
    // 3. Dados da carta 2
    // ==========================================
    printf("\nDados da CARTA 2 \n");

    printf("Letra do Estado 2: \n");
    scanf(" %c", &estado2);

    printf("Código da Cidade 2: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade 2: (Junto, sem espaços, EX: RioDeJaneiro)\n");
    scanf("%s", cidade2);

    printf("População da Cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Área da Cidade 2: \n");
    scanf("%f", &area2);

    printf("PIB da cidade 2 (em bilhões, ex: 300.50): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos na Cidade 2: \n");
    scanf("%d", &pontosTuristicos2);

    // MÁGICA ACONTECENDO AQUI (Cálculos Carta 2)
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;


    // ==========================================
    // 4. Imprimindo tudo
    // ==========================================
    printf("\n------------------\n");
    printf("---- CARTA 1 ----\n");
    printf("------------------\n");

    printf("Estado: %c\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População da Cidade: %d\n", populacao1);
    printf("Área da Cidade: %.2f km²\n", area1); // Arrumado para %.2f
    printf("PIB da cidade: %.2f bilhões de Reais\n", pib1); // \n movido para o final
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    // Exibindo os resultados novos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n------------------\n");
    printf("---- CARTA 2 ----\n");
    printf("------------------\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População da Cidade: %d\n", populacao2);
    printf("Área da Cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f bilhões de Reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    // Exibindo os resultados novos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}