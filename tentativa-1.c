#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste 1

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugess do tão: Utilize a função scanf para capturar as entradausuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // declaração das variáveis para carta 1
    char estado1;          // Estado (A-H)
    char codigo1[5];       // codigo da carta (ex: A01)
    char nomeCidade1[50];  // nome da cidade
    int populacao1;        // população
    float area1;           // área em km2
    float pib1;            // PIB em bilhões de reais
    int pontosTuristicos1; // Número de pontos turisticos

    // declaração de variáveis para a carta 2

    char estado2;          // Estado (A-H)
    char codigo2[5];       // codigo da carta (ex: A01)
    char nomeCidade2[50];  // nome da cidade
    int populacao2;        // população
    float area2;           // área em km²
    float pib2;            // PIB em bilhões de reais
    int pontosTuristicos2; // Número de pontos turisticos

    // INSTRUÇÕES PARA O USUÁRIO
    printf("Digite os dados da carta 1: \n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);
    printf("codifo da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    sscanf(" %[^\n]", nomeCidade1);
    printf("populacao: ");
    scanf("%d", populacao1);
    printf("Área (em km²): ");
    scanf("%f", &populacao1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Números de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2

    printf("Digite os dados da carta 2: \n");
    printf("Estado (A-H): ");
    scanf("%c", &estado2);
    printf("codifo da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    sscanf(" %[^\n]", nomeCidade2);
    printf("populacao: ");
    scanf("%d", populacao2);
    printf("Área (em km²): ");
    scanf("%f", &população2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Números de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // exibição das informações da carta 1
    printf("\n Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("código: %s\n", codigo1);
    printf("Nome da Cidade: %d\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // exibição das informações carta 2

    printf("\n Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("código: %s\n", codigo2);
    printf("Nome da Cidade: %d\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    return 0;
    