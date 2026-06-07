#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// Desafio aventureiro : Agregar duas variaveis, pib per capita e densidade populacional.

int main() {

 // Área para definição das variáveis para armazenar as propriedades das cidades

    
 // Variáveis Carta 1
 
  char Estado1;
  char codigo1[4];
  char Cidade1[15];
  float populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float per1;
  float densidade1;

 // Variáveis Carta 2

  char Estado2;
  char codigo2[4];
  char Cidade2[15];
  float populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float per2;
  float densidade2;
 
 // Área para entrada de dados carta 1

  printf("Cadastro da Carta 1\n");
    
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &Estado1);
    
  printf("Digite o Código da Carta (ex: A01): ");
  scanf(" %s", codigo1);
    
  printf("Digite o Nome da Cidade: ");
  scanf(" %s", Cidade1); 
    
  printf("Digite a População: ");
  scanf(" %f", &populacao1);
    
  printf("Digite a Área: ");
  scanf(" %f", &area1);
    
  printf("Digite o PIB: ");
  scanf(" %f", &pib1);
    
  printf("Digite o Número de Pontos Turísticos: ");
  scanf(" %d", &pontosturisticos1);
    
  printf("\n"); // Linha para separar as cartas

 // Área para entrada de dados carta 2 

  printf("Cadastro da Carta 2\n");
    
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &Estado2);
    
  printf("Digite o Código da Carta (ex: B02): ");
  scanf(" %s", codigo2);
    
  printf("Digite o Nome da Cidade: ");
  scanf(" %s", Cidade2);
    
  printf("Digite a População: ");
  scanf(" %f", &populacao2);
    
  printf("Digite a Área: ");
  scanf(" %f", &area2);
    
  printf("Digite o PIB: ");
  scanf(" %f", &pib2);
    
  printf("Digite o Número de Pontos Turísticos: ");
  scanf(" %d", &pontosturisticos2);
    
  per1 = pib1 / populacao1;
  densidade1 = populacao1 / area1;

  per2 = pib2 / populacao2;
  densidade2 = populacao2 / area2;

 // Área para exibição dos dados da cidade
    
 printf("\n"); 

 // Exibição da Carta 1

  printf("Carta 1:\n");
  printf("Estado: %c\n", Estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", Cidade1);
  printf("População: %f\n", populacao1);
  printf("Área: %.2f km²\n", area1); 
  printf("PIB: %.2f bilhões de Reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f Reais\n", per1);
    
  printf("\n"); 

 // Exibição da Carta 2

  printf("Carta 2:\n");
  printf("Estado: %c\n", Estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", Cidade2);
  printf("População: %f\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de Reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f Reais\n", per2);
 

  printf("\n"); 


 return 0;
} 
