#include <stdio.h>

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // ============================
    //     CADASTRO DA CARTA 1
    // ============================
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A ao H): ");
    scanf(" %c", &estado1);
    while (getchar() != '\n'); // Limpa o buffer de entrada

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    while (getchar() != '\n');

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade1);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n');

    printf("Area (em km2): ");
    scanf("%f", &area1);
    while (getchar() != '\n'); 

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    while (getchar() != '\n');

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    while (getchar() != '\n');

    printf("\n");

    // ============================
    //     CADASTRO DA CARTA 2
    // ============================
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Estado (A ao H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n');

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    while (getchar() != '\n'); 

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade2);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%d", &populacao2);
    while (getchar() != '\n');

    printf("Area (em km2): ");
    scanf("%f", &area2);
    while (getchar() != '\n');

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    while (getchar() != '\n'); 

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    while (getchar() != '\n');

    // ===========================================
    //                 CÁLCULOS
    // ===========================================
    
    // Calcula os dados para a Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    
    // Calcula os dados para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===========================================
    //     EXIBICAO DAS CARTAS CADASTRADAS
    // ===========================================
    printf("\n\n--- Cartas Cadastradas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0; // Indica que o programa terminou com sucesso
}
