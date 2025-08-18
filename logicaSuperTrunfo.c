#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados das cartas.
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
    // Cadastro das cartas.
    struct carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.0, 699000.0, 20};
    struct carta carta2 = {"RJ", "A02", "Rio de Janeiro", 6000000, 1182.0, 400000.0, 15};

    // calculando os valores definido por população.
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Utilizando if e else , imprimindo os resultados com printf.
    printf("Comparação de cartas (Atributo: População)\n\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n\n", carta2.cidade, carta2.estado, carta2.populacao);
    
    if (carta1.populacao > carta2.populacao) {
    printf("Resultado: Carta 1 (%s) venceu! \n", carta1.cidade);
} else {
    printf("Resultado: Carta 2 (%s) venceu! \n", carta2.cidade);
}


    return 0;
    
    }
