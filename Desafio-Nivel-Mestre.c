#include <stdio.h>

// Define uma constante para o valor de 1 bilhão para maior clareza
#define BILHAO 1e9

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // --- Variáveis de Resultado da Comparação ---
    int vitoriaPopulacao;
    int vitoriaArea;
    int vitoriaPIB;
    int vitoriaPontosTuristicos;
    int vitoriaDensidade;
    int vitoriaPIBPerCapita;
    int vitoriaSuperPoder;


    // ============================
    //     CADASTRO DA CARTA 1
    // ============================
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A ao H): ");
    scanf(" %c", &estado1);
    while (getchar() != '\n');

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    while (getchar() != '\n');

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade1);
    while (getchar() != '\n');

    printf("Populacao: ");
    scanf("%lu", &populacao1); // Alterado para %lu
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
    scanf("%lu", &populacao2); // Alterado para %lu
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
    pibPerCapita1 = (pib1 * BILHAO) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    // Calcula os dados para a Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * BILHAO) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // ===========================================
    //         COMPARAÇÃO DAS CARTAS
    // ===========================================
    // Para cada atributo, 1 significa que a Carta 1 venceu, 0 que a Carta 2 venceu.
    
    vitoriaPopulacao = populacao1 > populacao2;
    vitoriaArea = area1 > area2;
    vitoriaPIB = pib1 > pib2;
    vitoriaPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    vitoriaDensidade = densidadePopulacional1 < densidadePopulacional2; // Regra invertida: menor é melhor
    vitoriaPIBPerCapita = pibPerCapita1 > pibPerCapita2;
    vitoriaSuperPoder = superPoder1 > superPoder2;

    // ===========================================
    //     EXIBICAO DAS CARTAS CADASTRADAS
    // ===========================================
    printf("\n\n--- Cartas Cadastradas ---\n");

    printf("\nCarta 1:\n");
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1); // Alterado para %lu
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2); // Alterado para %lu
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===========================================
    //    EXIBICAO DOS RESULTADOS DA COMPARAÇÃO
    // ===========================================
    printf("\n\n--- Comparacao de Cartas ---\n");
    printf("População: Carta %s venceu (%d)\n", vitoriaPopulacao ? "1" : "2", vitoriaPopulacao);
    printf("Área: Carta %s venceu (%d)\n", vitoriaArea ? "1" : "2", vitoriaArea);
    printf("PIB: Carta %s venceu (%d)\n", vitoriaPIB ? "1" : "2", vitoriaPIB);
    printf("Pontos Turísticos: Carta %s venceu (%d)\n", vitoriaPontosTuristicos ? "1" : "2", vitoriaPontosTuristicos);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", vitoriaDensidade ? "1" : "2", vitoriaDensidade);
    printf("PIB per Capita: Carta %s venceu (%d)\n", vitoriaPIBPerCapita ? "1" : "2", vitoriaPIBPerCapita);
    printf("Super Poder: Carta %s venceu (%d)\n", vitoriaSuperPoder ? "1" : "2", vitoriaSuperPoder);


    return 0; // Indica que o programa terminou com sucesso
}
