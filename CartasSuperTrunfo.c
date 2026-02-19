#include <stdio.h>

int main() {

    /* ===== CARTA 1 ===== */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    /* ===== CARTA 2 ===== */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    /* ===== ENTRADA ===== */

    printf("Cadastro da Carta 1\n");
    scanf(" %c", &estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", cidade1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2\n");
    scanf(" %c", &estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", cidade2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontos2);

    /* ===== CALCULOS ===== */

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = (float)populacao1 +
                  area1 +
                  pib1 +
                  pontos1 +
                  pibPerCapita1 +
                  (1.0 / densidade1);

    superPoder2 = (float)populacao2 +
                  area2 +
                  pib2 +
                  pontos2 +
                  pibPerCapita2 +
                  (1.0 / densidade2);

    /* ===== COMPARACOES ===== */

    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontos = pontos1 > pontos2;
    int resultadoDensidade = densidade1 < densidade2;  // menor vence
    int resultadoPIBPerCapita = pibPerCapita1 > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    /* ===== SAIDA ===== */

    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPIB);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", resultadoPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPIBPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}