#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados das cartas
struct carta {
    char estado[30];
    char codigoPostal[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main () {
    // Cadastro das cartas
    struct carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.0, 699000.0, 20};
    struct carta carta2 = {"RJ", "A02", "Rio de Janeiro", 6000000, 1182.0, 400000.0, 15};

    // Cálculo de densidade e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    int opcao;
    printf("=== SUPER TRUNFO - MENU DE ATRIBUTOS ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (Carta 1) e %s (Carta 2)\n\n", carta1.cidade, carta2.cidade);

    switch (opcao) {
        case 1:
            // Comparacao por populacao
            printf("Atributo: Populacao\n");
            printf("%s: %d\n", carta1.cidade, carta1.populacao);
            printf("%s: %d\n", carta2.cidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedora: %s\n", carta1.cidade);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Vencedora: %s\n", carta2.cidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            // Comparacao por area
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", carta1.cidade, carta1.area);
            printf("%s: %.2f\n", carta2.cidade, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedora: %s\n", carta1.cidade);
            } else if (carta1.area < carta2.area) {
                printf("Vencedora: %s\n", carta2.cidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            // Comparacao por PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", carta1.cidade, carta1.pib);
            printf("%s: %.2f\n", carta2.cidade, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedora: %s\n", carta1.cidade);
            } else if (carta1.pib < carta2.pib) {
                printf("Vencedora: %s\n", carta2.cidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            // Comparacao por pontos turisticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", carta1.cidade, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.cidade, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedora: %s\n", carta1.cidade);
            } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                printf("Vencedora: %s\n", carta2.cidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            // Comparacao por densidade populacional
            // OBS: nesse atributo, vence a cidade com MENOR densidade
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f\n", carta1.cidade, carta1.densidadePopulacional);
            printf("%s: %.2f\n", carta2.cidade, carta2.densidadePopulacional);
            // Aqui o menor vence!
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("Vencedora: %s\n", carta1.cidade);
            } else if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
                printf("Vencedora: %s\n", carta2.cidade);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
             // Comparacao por PIB per capita
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", carta1.cidade, carta1.pibPerCapita);
            printf("%s: %.2f\n", carta2.cidade, carta2.pibPerCapita);
            if (carta1.pibPerCapita > carta2.pibPerCapita) {
                printf("Vencedora: %s\n", carta1.cidade);
            } else if (carta1.pibPerCapita < carta2.pibPerCapita) {
                printf("Vencedora: %s\n", carta2.cidade);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            // Caso o usuario digite uma opcao invalida
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
