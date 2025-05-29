#include <stdio.h>

struct Carta{
    char codigo[4]; //Código cidade (A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos; };

int main() {

    struct Carta carta1;
    struct Carta carta2;


    //Carta 1
    printf("Digite o código da carta 1\n");
    scanf("%s", carta1.codigo);
   
    printf("Digite a população da carta 1\n");
    scanf("%d", &carta1.populacao);

    printf("Digite a area da carta 1 em Km2\n");
    scanf("%f", &carta1.area);

    printf( "Digite o PIB da carta1 (em trilhões)\n" );
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos da carta 1\n");
    scanf("%d", &carta1.pontos_turisticos);

    //Carta 2

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0; }
