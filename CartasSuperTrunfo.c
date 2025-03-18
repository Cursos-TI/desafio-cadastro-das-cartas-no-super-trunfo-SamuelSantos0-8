#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int PontoTuristico1 = 0;
    

    // Insere dados da carta 

    printf("Informe o Estado: ");
    scanf(" %c", &estado1);

    printf("Informe o codigo: ");
    scanf("%s", &codigo1); 

    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de ponto turistico: ");
    scanf("%d", &PontoTuristico1);

    // Insere dados da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int PontoTuristico2 = 0;

    printf("Informe o Estado: ");
    scanf(" %c", &estado2);

    printf("Informe o codigo: ");
    scanf("%s", &codigo2);
    
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade2);
    
    printf("Informe a população: ");
    scanf("%d", &populacao2);

    printf("Informe a área: ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de ponto turistico: ");
    scanf("%d", &PontoTuristico2);

    // Exibe os dados inseridos da carta 1 e 2

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PontoTuristico1);

    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PontoTuristico2);  

    return 0;
}
