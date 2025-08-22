// 1. Definição da Estrutura de Dados
// 'struct' para agrupar todas as informações de uma cidade em uma única variável.
typedef struct {
    char nome[100];
    long long populacao;
    double pib;
    double area;
    int pontos_turisticos;
} Cidade;

// 2. Funções do Jogo
// Função para exibir as informações de uma carta.
void exibir_carta(Cidade c) {
    printf("--- Carta: %s ---\n", c.nome);
    printf("Populacao: %lld habitantes\n", c.populacao);
    printf("PIB: R$ %.2lf bilhoes\n", c.pib / 1000000000.0);
    printf("Area: %.2lf km²\n", c.area);
    printf("Pontos Turisticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2lf hab/km²\n", (double)c.populacao / c.area);
    printf("PIB per Capita: R$ %.2lf\n", c.pib / c.populacao);
    printf("\n");
}

// Função para comparar os atributos de duas cidades.
// Ela usa operadores relacionais e a lógica de if/else para determinar o vencedor.
void comparar_cidades(Cidade c1, Cidade c2) {
    printf("--- Comparacao de Atributos: %s vs %s ---\n\n", c1.nome, c2.nome);

    // Comparando População
    if (c1.populacao > c2.populacao) {
        printf("Populacao: %s tem mais habitantes.\n", c1.nome);
    } else if (c2.populacao > c1.populacao) {
        printf("Populacao: %s tem mais habitantes.\n", c2.nome);
    } else {
        printf("Populacao: As cidades estao empatadas.\n");
    }

    // Comparando PIB
    if (c1.pib > c2.pib) {
        printf("PIB: %s tem PIB maior.\n", c1.nome);
    } else if (c2.pib > c1.pib) {
        printf("PIB: %s tem PIB maior.\n", c2.nome);
    } else {
        printf("PIB: As cidades estao empatadas.\n");
    }

    // Comparando Area
    if (c1.area > c2.area) {
        printf("Area: %s tem maior area.\n", c1.nome);
    } else if (c2.area > c1.area) {
        printf("Area: %s tem maior area.\n", c2.nome);
    } else {
        printf("Area: As cidades estao empatadas.\n");
    }

    // Comparando Pontos Turísticos
    if (c1.pontos_turisticos > c2.pontos_turisticos) {
        printf("Pontos Turisticos: %s tem mais pontos turisticos.\n", c1.nome);
    } else if (c2.pontos_turisticos > c1.pontos_turisticos) {
        printf("Pontos Turisticos: %s tem mais pontos turisticos.\n", c2.nome);
    } else {
        printf("Pontos Turisticos: As cidades estao empatadas.\n");
    }
    
    // Comparando Densidade Populacional
    double densidade1 = (double)c1.populacao / c1.area;
    double densidade2 = (double)c2.populacao / c2.area;
    if (densidade1 > densidade2) {
        printf("Densidade Populacional: %s tem maior densidade.\n", c1.nome);
    } else if (densidade2 > densidade1) {
        printf("Densidade Populacional: %s tem maior densidade.\n", c2.nome);
    } else {
        printf("Densidade Populacional: As cidades estao empatadas.\n");
    }

    // Comparando PIB per Capita
    double pib_per_capita1 = c1.pib / c1.populacao;
    double pib_per_capita2 = c2.pib / c2.populacao;
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: %s tem maior PIB per capita.\n", c1.nome);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("PIB per Capita: %s tem maior PIB per capita.\n", c2.nome);
    } else {
        printf("PIB per Capita: As cidades estao empatadas.\n");
    }
}

// 3. Função Principal (main)
// É aqui que o programa começa a execução.
int main() {
    // Inicialização de duas cartas com dados reais.
    Cidade sp = {"Sao Paulo", 11900000, 903600000000.0, 1521.2, 250};
    Cidade rj = {"Rio de Janeiro", 6775000, 413800000000.0, 1200.3, 300};

    // Chamada das funções para exibir e comparar as cartas.
    exibir_carta(sp);
    exibir_carta(rj);

    comparar_cidades(sp, rj);

    return 0;
}
