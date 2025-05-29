#include <stdio.h>

struct Carta {
    char codigo[4]; //Código cidade (A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    //Carta 1
    printf("\n--- Cadastro de cartas ---\n");
    printf("\n");
    printf("Carta 1\n");
    printf("\n");

    printf("Digite o código da carta 1: ");
    scanf("%s", carta1.codigo);

    printf("Digite a população da carta 1: ");
    scanf(" %d", &carta1.populacao); 

    printf("Digite a area da carta 1 em Km2: ");
    scanf(" %f", &carta1.area);

    printf("Digite o PIB da carta 1 (em trilhões): ");
    scanf(" %f", &carta1.pib);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf(" %d", &carta1.pontos_turisticos);

    //Carta 2
    printf("\n");
    printf("-Carta 2-\n");
    printf("\n");

    printf("Digite o código da carta 2: ");
    scanf("%s", carta2.codigo);

    printf("Digite a população da carta 2: ");
    scanf(" %d", &carta2.populacao); 

    printf("Digite a area da carta 2 em Km2: ");
    scanf(" %f", &carta2.area); 

    printf("Digite o PIB da carta 2 (em trilhões): ");
    scanf(" %f", &carta2.pib); 

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf(" %d", &carta2.pontos_turisticos);

    //exibição final
    printf("\n--- Dados Cadastrados ---\n");
    printf("\n");

    printf("Carta 1:\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Populacao: %d habitantes\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f trilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Populacao: %d habitantes\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f trilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}