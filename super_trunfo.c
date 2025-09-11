#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[20];
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Declaração de variáveis para a Carta 2
    char estado2[20];
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (ex: Acre): ");
    scanf(" %[^\n]", estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Cálculo dos novos atributos para a Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    printf("\n");

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (ex: Bahia): ");
    scanf(" %[^\n]", estado2);

    printf("Digite o Codigo da Carta (ex: B03): ");
    scanf("%s", codigo_carta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- Cálculo dos novos atributos para a Carta 2
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // --- Cálculo do Super Poder para ambas as cartas
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    printf("\n");

    // --- Exibição das Cartas (para verificação) ---
    printf("--- Cartas Cadastradas ---\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n");

    // --- Batalha de Cartas ---
    printf("--- Batalha de Cartas ---\n\n");
    
    // Escolha do atributo para a batalha
    // Para este desafio, o atributo escolhido foi a População.
    // Para alterar, basta trocar as variáveis e os textos nos printf's.
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");

    // Exibe os valores das cartas para o atributo escolhido
    printf("Carta 1 - %s (%s): %lu\n", nome_cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nome_cidade2, estado2, populacao2);

    // Lógica de comparação para o atributo "População" (maior valor vence)
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
