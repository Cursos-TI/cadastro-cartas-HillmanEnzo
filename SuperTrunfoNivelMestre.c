#include <stdio.h>

int main (){
    // ==========================================
    // 1. VARIÁVEIS
    // ==========================================
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    
    // MUDANÇA 1: Usando unsigned long int para caber números muito grandes de população
    unsigned long int populacao1, populacao2; 
    
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    
    // MUDANÇA 2: Novas variáveis para o Super Poder
    float superPoder1, superPoder2; 

    // ==========================================
    // 2. ENTRADA DE DADOS E CÁLCULOS (CARTA 1)
    // ==========================================
    printf("--- DADOS DA CARTA 1 ---\n");

    printf("Letra do Estado 1: ");
    scanf(" %c", &estado1);

    printf("Código da Cidade 1: ");
    scanf(" %s", codigo1);

    printf("Nome da cidade 1: (Junto, sem espaços) ");
    scanf(" %s", cidade1);

    printf("População da Cidade 1: ");
    // MUDANÇA 3: Usamos %lu para ler o unsigned long int
    scanf("%lu", &populacao1); 

    printf("Área da Cidade 1: ");
    scanf("%f", &area1);

    printf("PIB da cidade 1 (em bilhões, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos na Cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    // Colocamos o (float) antes das variáveis inteiras para fazer o "Casting" (conversão)
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1; 
    
    // O Super Poder soma tudo. O 1.0f / densidade1 pega o inverso da densidade.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);


    // ==========================================
    // 3. ENTRADA DE DADOS E CÁLCULOS (CARTA 2)
    // ==========================================
    printf("\n--- DADOS DA CARTA 2 ---\n");

    printf("Letra do Estado 2: ");
    scanf(" %c", &estado2);

    printf("Código da Cidade 2: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade 2: (Junto, sem espaços) ");
    scanf("%s", cidade2);

    printf("População da Cidade 2: ");
    scanf("%lu", &populacao2); 

    printf("Área da Cidade 2: ");
    scanf("%f", &area2);

    printf("PIB da cidade 2 (em bilhões, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos na Cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);


    // ==========================================
    // 4. BATALHA E COMPARAÇÃO
    // ==========================================
    // Vamos fazer as perguntas lógicas para o computador. 
    // Se a Carta 1 for maior, a resposta é 1 (Verdadeiro). Se não, é 0 (Falso).
    
    int venceuPop = populacao1 > populacao2;
    int venceuArea = area1 > area2;
    int venceuPib = pib1 > pib2;
    int venceuPontos = pontosTuristicos1 > pontosTuristicos2;
    
    // ATENÇÃO: Na densidade, vence quem tem o MENOR valor! Por isso usamos o '<'.
    int venceuDensidade = densidade1 < densidade2; 
    
    int venceuPibCapita = pibPerCapita1 > pibPerCapita2;
    int venceuSuper = superPoder1 > superPoder2;


    // ==========================================
    // 5. IMPRESSÃO DOS RESULTADOS DA LUTA
    // ==========================================
    printf("\n=========================\n");
    printf("   COMPARAÇÃO DE CARTAS  \n");
    printf("=========================\n");

    // Truque matemático: 2 - (resultado).
    // Se Carta 1 venceu (resultado 1), a conta fica 2 - 1 = Carta 1.
    // Se Carta 2 venceu (resultado 0), a conta fica 2 - 0 = Carta 2.
    
    printf("População: Carta %d venceu (%d)\n", 2 - venceuPop, venceuPop);
    printf("Área: Carta %d venceu (%d)\n", 2 - venceuArea, venceuArea);
    printf("PIB: Carta %d venceu (%d)\n", 2 - venceuPib, venceuPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - venceuPontos, venceuPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - venceuDensidade, venceuDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - venceuPibCapita, venceuPibCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - venceuSuper, venceuSuper);

    return 0;
}