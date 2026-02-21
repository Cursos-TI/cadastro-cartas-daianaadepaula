#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    /* ===== ENTRADA ===== */
    printf("Cadastro da Carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    /* ===== CALCULOS ===== */
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    /* ===== MENU ===== */
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    /* ===== COMPARACAO ===== */
    switch(opcao){
        case 1: // Populacao
            printf("\nComparacao: Populacao\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);

            if(populacao1 > populacao2){
                printf("Carta 1 venceu!\n");
            } else if(populacao2 > populacao1){
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Area
            printf("\nComparacao: Area\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if(area1 > area2){
                printf("Carta 1 venceu!\n");
            } else if(area2 > area1){
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nComparacao: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if(pib1 > pib2){
                printf("Carta 1 venceu!\n");
            } else if(pib2 > pib1){
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turisticos
            printf("\nComparacao: Pontos Turisticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if(pontos1 > pontos2){
                printf("Carta 1 venceu!\n");
            } else if(pontos2 > pontos1){
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade populacional
            printf("\nComparacao: Densidade Populacional\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            if(densidade1 < densidade2){
                printf("Carta 1 venceu!\n");
            } else if(densidade2 < densidade1){
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            printf("\nComparacao: PIB per Capita\n");
            printf("%s: %.2f\n", cidade1, pibPerCapita1);
            printf("%s: %.2f\n", cidade2, pibPerCapita2);

            if(pibPerCapita1 > pibPerCapita2){
                printf("Carta 1 venceu!\n");
            } else if(pibPerCapita2 > pibPerCapita1){
                printf("Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}