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

    // --- Batalha de Cartas Interativa (Adaptado para o desafio de nível mestre) ---
    int escolha_atributo1, escolha_atributo2;
    float soma1 = 0.0, soma2 = 0.0;
    
    printf("--- Batalha de Cartas ---\n\n");
    
    // Menu para o primeiro atributo
    printf("Selecione o PRIMEIRO atributo para a batalha:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite o numero correspondente: ");
    scanf("%d", &escolha_atributo1);

    // Validação da primeira escolha
    if (escolha_atributo1 < 1 || escolha_atributo1 > 5) {
        printf("Opcao invalida! O jogo terminou.\n");
        return 0;
    }

    // Menu dinâmico para o segundo atributo
    do {
        printf("\nSelecione o SEGUNDO atributo para a batalha (diferente do primeiro):\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Populacional\n");
        printf("Digite o numero correspondente: ");
        scanf("%d", &escolha_atributo2);
        
        if (escolha_atributo1 == escolha_atributo2) {
            printf("Opcao invalida! O segundo atributo deve ser diferente do primeiro.\n");
        } else if (escolha_atributo2 < 1 || escolha_atributo2 > 5) {
            printf("Opcao invalida! O jogo terminou.\n");
            return 0;
        }

    } while (escolha_atributo1 == escolha_atributo2);

    // Lógica para obter a soma dos valores dos atributos
    // O valor do atributo Densidade Populacional é invertido para a soma,
    // já que o menor valor vence.
    
    // Adiciona o PRIMEIRO atributo à soma
    switch (escolha_atributo1) {
        case 1: // Populacao
            soma1 += (float)populacao1;
            soma2 += (float)populacao2;
            break;
        case 2: // Area
            soma1 += area1;
            soma2 += area2;
            break;
        case 3: // PIB
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: // Pontos Turisticos
            soma1 += (float)pontos_turisticos1;
            soma2 += (float)pontos_turisticos2;
            break;
        case 5: // Densidade Populacional (menor valor vence)
            soma1 -= densidade_populacional1;
            soma2 -= densidade_populacional2;
            break;
    }
    
    // Adiciona o SEGUNDO atributo à soma
    switch (escolha_atributo2) {
        case 1: // Populacao
            soma1 += (float)populacao1;
            soma2 += (float)populacao2;
            break;
        case 2: // Area
            soma1 += area1;
            soma2 += area2;
            break;
        case 3: // PIB
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: // Pontos Turisticos
            soma1 += (float)pontos_turisticos1;
            soma2 += (float)pontos_turisticos2;
            break;
        case 5: // Densidade Populacional (menor valor vence)
            soma1 -= densidade_populacional1;
            soma2 -= densidade_populacional2;
            break;
    }
    
    printf("\n--- Comparacao de Cartas ---\n");
    printf("Atributos escolhidos: ");

    // Exibe os nomes dos atributos escolhidos (usando switch para cada escolha)
    switch(escolha_atributo1) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turisticos"); break;
        case 5: printf("Densidade Populacional"); break;
    }
    printf(" e ");
    switch(escolha_atributo2) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turisticos"); break;
        case 5: printf("Densidade Populacional"); break;
    }
    printf("\n\n");
    
    // Exibição clara dos valores dos atributos e das somas
    printf("Valores da Carta 1 (%s):\n", nome_cidade1);
    printf("  Atributo 1: %.2f\n", (escolha_atributo1 == 1) ? (float)populacao1 : (escolha_atributo1 == 2) ? area1 : (escolha_atributo1 == 3) ? pib1 : (escolha_atributo1 == 4) ? (float)pontos_turisticos1 : densidade_populacional1);
    printf("  Atributo 2: %.2f\n", (escolha_atributo2 == 1) ? (float)populacao1 : (escolha_atributo2 == 2) ? area1 : (escolha_atributo2 == 3) ? pib1 : (escolha_atributo2 == 4) ? (float)pontos_turisticos1 : densidade_populacional1);
    printf("  Soma total: %.2f\n\n", soma1);
    
    printf("Valores da Carta 2 (%s):\n", nome_cidade2);
    printf("  Atributo 1: %.2f\n", (escolha_atributo1 == 1) ? (float)populacao2 : (escolha_atributo1 == 2) ? area2 : (escolha_atributo1 == 3) ? pib2 : (escolha_atributo1 == 4) ? (float)pontos_turisticos2 : densidade_populacional2);
    printf("  Atributo 2: %.2f\n", (escolha_atributo2 == 1) ? (float)populacao2 : (escolha_atributo2 == 2) ? area2 : (escolha_atributo2 == 3) ? pib2 : (escolha_atributo2 == 4) ? (float)pontos_turisticos2 : densidade_populacional2);
    printf("  Soma total: %.2f\n\n", soma2);
    
    // Resultado final com base na soma
    if (soma1 > soma2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
