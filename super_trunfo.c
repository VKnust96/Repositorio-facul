#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[20]; // Alterado para armazenar o nome completo do estado
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração de variáveis para a Carta 2
    char estado2[20];
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2; // Corrigido para o tipo int

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (ex: Acre): ");
    scanf(" %[^\n]", estado1); 
    
    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    
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
    scanf("%d", &populacao2);
    
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n");

    // --- Exibição das Cartas ---
    printf("--- Cartas Cadastradas ---\n\n");
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    
    printf("\n");
    
    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}