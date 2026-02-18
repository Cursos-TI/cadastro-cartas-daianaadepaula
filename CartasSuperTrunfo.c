#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  /* ===== CARTA 1 ===== */
  char codigo1[4];
  char estado1;
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  /* ===== CARTA 2 ===== */
  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // Área para entrada de dados
  /* ===== ENTRADA DE DADOS - CARTA 1 ===== */
  printf("Cadastro da Carta 1\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  /* ===== ENTRADA DE DADOS - CARTA 2 ===== */
  printf("\nCadastro da Carta 2\n");

  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Codigo da Carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
  printf("\n===== CARTA 1 =====\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);

  printf("\n===== CARTA 2 =====\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);

  return 0;
} 
