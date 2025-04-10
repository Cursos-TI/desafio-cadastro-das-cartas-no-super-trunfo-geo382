#include <stdio.h>

int main() {
    char estado1, estado2; // Declaração de variáveis para armazenar os dados das cartas
    // O tamanho do array é 5, pois o código da carta tem 4 caracteres + 1 para o caractere nulo

    char codigo1[5], codigo2[5]; // Declaração de variáveis para armazenar os códigos das cartas
    // O tamanho do array é 5, pois o código da carta tem 4 caracteres + 1 para o caractere nulo

    char nome1[16], nome2[16]; // Declaração de variáveis para armazenar os nomes das cidades
    // O tamanho do array é 16, pois o nome da cidade tem 15 caracteres + 1 para o caractere nulo

    int populacao1, populacao2; // Declaração de variáveis para armazenar as populações das cidades
    // O tamanho do array é 5, pois o código da carta tem 4 caracteres + 1 para o caractere nulo

    float area1, area2, pib1, pib2; // Declaração de variáveis para armazenar a área e o PIB das cidades
    // O tamanho do array é 5, pois o código da carta tem 4 caracteres + 1 para o caractere nulo

    float densidade_Populacional1;

    float densidade_Populacional2;

    int pontos_turisticos1, pontos_turisticos2; // Declaração de variáveis para armazenar o número de pontos turísticos das cidades

    printf("Cadastro da Carta 1:\n"); // Solicita os dados da primeira carta

    printf("Estado (A-H): ");  // solicita o estado da carta
    scanf(" %c", &estado1);  // Lê o estado da carta

    printf("Código da Carta (ex: A01): "); // solicita o código da carta
    scanf(" %3s", codigo1); // Lê o código da carta

    getchar(); // Limpa o buffer do teclado

    printf("Nome da Cidade: "); // solicita o nome da cidade
    scanf(" %15[^\n]", nome1); // Lê o nome da cidade, permitindo espaços e limitando a 15 caracteres
    fgets(nome1, sizeof(nome1), stdin); // Use fgets para ler strings com espaços e zerar o buffer e sizeif para evitar buffer overflow
    //Retorna o tamanho do array nome1 em bytes, ou seja, quantos caracteres ele pode armazenar, stdin é o buffer de entrada padrão

    printf("População: "); // solicita a população da cidade
    scanf(" %d", &populacao1); // Lê a população da cidade

    printf("Área (em km²): "); // solicita a área da cidade
    scanf(" %f", &area1); // Lê a área da cidade

    printf("PIB (em bilhões de reais): "); // solicita o PIB da cidade
    scanf(" %f", &pib1); // Lê o PIB da cidade

    printf("Número de Pontos Turísticos: "); // solicita o número de pontos turísticos da cidade
    scanf(" %d", &pontos_turisticos1); // Lê o número de pontos turísticos da cidade

    densidade_Populacional1 = (populacao1 / area1);

    

    getchar(); // Limpa o buffer do teclado

    printf("\nCadastro da Carta 2:\n"); // Solicita os dados da segunda carta

    printf("Estado (A-H): "); // solicita o estado da carta
    scanf(" %c", &estado2); // Lê o estado da carta

    printf("Código da Carta (ex: A01): "); // solicita o código da carta
    scanf(" %3s", codigo2); // Lê o código da carta

    printf("Nome da Cidade: "); // solicita o nome da cidade
    scanf(" %15[^\n]", nome2); // Lê o nome da cidade, permitindo espaços e limitando a 15 caracteres
    fgets(nome2, sizeof(nome2),stdin); // Use fgets para ler strings com espaços e zerar o buffer e sizeif para evitar buffer overflow
    //Retorna o tamanho do array nome1 em bytes, ou seja, quantos caracteres ele pode armazenar, stdin é o buffer de entrada padrão

    printf("População: "); // solicita a população da cidade
    scanf(" %d", &populacao2); // Lê a população da cidade

    printf("Área (em km²): "); // solicita a área da cidade
    scanf(" %f", &area2); // Lê a área da cidade

    printf("PIB (em bilhões de reais): "); // solicita o PIB da cidade
    scanf(" %f", &pib2); // Lê o PIB da cidade

    printf("Número de Pontos Turísticos: "); // solicita o número de pontos turísticos da cidade
    scanf(" %d", &pontos_turisticos2); // Lê o número de pontos turísticos da cidade

    densidade_Populacional2 = (populacao2 / area2);

    printf("\n***<<<Cartas Cadastradas>>>***:\n"); // Exibe os dados das cartas cadastradas
    printf("\nCarta 1:\n"); // Exibe os dados da primeira carta
    printf("Estado: %c\n", estado1); // Exibe o estado da carta
    printf("Código: %s\n", codigo1); // Exibe o código da carta
    printf("Nome da Cidade: %s", nome1); // Exibe o nome da cidade
    printf("População: %d\n", populacao1); // Exibe a população da cidade
    printf("Área: %.2f km²\n", area1); // Exibe a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); // Exibe o número de pontos turísticos da cidade
    printf("A Densidade Populacional é : %.2f", densidade_Populacional1);

    printf("\nCarta 2:\n"); // Exibe os dados da segunda carta
    printf("Estado: %c\n", estado2); // Exibe o estado da carta
    printf("Código: %s\n", codigo2); // Exibe o código da carta
    printf("Nome da Cidade: %s", nome2); // Exibe o nome da cidade
    printf("População: %d\n", populacao2); // Exibe a população da cidade
    printf("Área: %.2f km²\n", area2); // Exibe a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB da cidade
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2); // Exibe o número de pontos turísticos da cidade
    printf("A Densidade Populacional é : %.2f", densidade_Populacional2);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
    // O programa termina aqui
}
