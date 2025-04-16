#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    #include <stdio.h>

struct Carta {
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Codigo (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculo dos atributos derivados da carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = (float)carta1.populacao + carta1.area + carta1.pib +
                         (float)carta1.pontos_turisticos + carta1.pib_per_capita + (1 / carta1.densidade);

    // Entrada de dados da carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Codigo (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo dos atributos derivados da carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = (float)carta2.populacao + carta2.area + carta2.pib +
                         (float)carta2.pontos_turisticos + carta2.pib_per_capita + (1 / carta2.densidade);

    // Exibição das cartas
    printf("\n--- Dados da Carta 1 (%s) ---\n", carta1.codigo);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta1.densidade);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    printf("\n--- Dados da Carta 2 (%s) ---\n", carta2.codigo);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta2.densidade);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    // Comparações (sem if, utilizando operadores lógicos aritméticos)
    int resultado_populacao = (carta1.populacao > carta2.populacao);
    int resultado_area = (carta1.area > carta2.area);
    int resultado_pib = (carta1.pib > carta2.pib);
    int resultado_pontos = (carta1.pontos_turisticos > carta2.pontos_turisticos);
    int resultado_densidade = (carta1.densidade < carta2.densidade); // menor vence
    int resultado_pibpc = (carta1.pib_per_capita > carta2.pib_per_capita);
    int resultado_super = (carta1.super_poder > carta2.super_poder);

    printf("\n--- Resultado da Comparacao ---\n");
    printf("Populacao: Carta %d venceu\n", resultado_populacao + 1);
    printf("Area: Carta %d venceu\n", resultado_area + 1);
    printf("PIB: Carta %d venceu\n", resultado_pib + 1);
    printf("Pontos Turisticos: Carta %d venceu\n", resultado_pontos + 1);
    printf("Densidade Populacional: Carta %d venceu\n", resultado_densidade + 1);
    printf("PIB per Capita: Carta %d venceu\n", resultado_pibpc + 1);
    printf("Super Poder: Carta %d venceu\n", resultado_super + 1);

    return 0;
}
