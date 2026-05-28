#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

 // Área para definição das variáveis para armazenar as propriedades das cidades

    
 // Variáveis Carta 1
 
  char Estado1;
  char codigo1[4];
  char Cidade1[15];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

 // Variáveis Carta 2

  char Estado2;
  char codigo2[4];
  char Cidade2[15];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

 // Área para entrada de dados carta 1

  printf("Cadastro da Carta 1\n");
    
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &Estado1);
    
  printf("Digite o Código da Carta (ex: A01): ");
  scanf(" %s", codigo1);
    
  printf("Digite o Nome da Cidade: ");
  scanf(" %s", Cidade1); 
    
  printf("Digite a População: ");
  scanf(" %d", &populacao1);
    
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
  scanf(" %d", &populacao2);
    
  printf("Digite a Área: ");
  scanf(" %f", &area2);
    
  printf("Digite o PIB: ");
  scanf(" %f", &pib2);
    
  printf("Digite o Número de Pontos Turísticos: ");
  scanf(" %d", &pontosturisticos2);
    
  

 // Área para exibição dos dados da cidade
    
 printf("\n"); 

 // Exibição da Carta 1

  printf("Carta 1:\n");
  printf("Estado: %c\n", Estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", Cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1); 
  printf("PIB: %.2f bilhões de Reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    
  printf("\n"); 

 // Exibição da Carta 2

  printf("Carta 2:\n");
  printf("Estado: %c\n", Estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", Cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de Reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

  printf("\n"); 


 return 0;
} 
