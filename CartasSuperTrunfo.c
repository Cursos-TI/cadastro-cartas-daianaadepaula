#include <stdio.h>

int main() {
    /* ===== CARTAS 1 e 2 ===== */
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2;
    int pontos1, pontos2;

    /* ===== ENTRADA DE DADOS ===== */
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

    /* ===== CALCULOS (AGORA CORRETAMENTE) ===== */
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    int atributo1, atributo2;

    /* ===== MENU ===== */
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Erro: Atributos iguais!\n");
        return 0;
    }

    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    /* ===== ATRIBUTO 1 ===== */
    switch(atributo1){
        case 1:
            valor1_c1 = populacao1; valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1; valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1; valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos1; valor1_c2 = pontos2;
            break;
        case 5:
            valor1_c1 = 1.0/densidade1; valor1_c2 = 1.0/densidade2;
            break;
        case 6:
            valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2;
            break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    /* ===== ATRIBUTO 2 ===== */
    switch(atributo2){
        case 1:
            valor2_c1 = populacao1; valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1; valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1; valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos1; valor2_c2 = pontos2;
            break;
        case 5:
            valor2_c1 = 1.0/densidade1; valor2_c2 = 1.0/densidade2;
            break;
        case 6:
            valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2;
            break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n%s - Soma: %.2f\n", cidade1, soma1);
    printf("%s - Soma: %.2f\n", cidade2, soma2);

    printf("\nResultado Final:\n");

    if(soma1 > soma2)
        printf("%s venceu!\n", cidade1);
    else if(soma2 > soma1)
        printf("%s venceu!\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}