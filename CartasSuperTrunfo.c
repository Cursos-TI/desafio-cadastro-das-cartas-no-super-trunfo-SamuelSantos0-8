#include <stdio.h>

int main(){
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int PontoTuristico1 = 0;
    float DensidadePopulacional1 = 0;
    float pibPCapita1;
    float superPoder1;

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

    DensidadePopulacional1 = (float) populacao1 / area1;
    pibPCapita1 = pib1 / (float) populacao1;

    superPoder1 = (float) populacao1 + area1 + pib1 + (float) PontoTuristico1 + pibPCapita1 + (1/DensidadePopulacional1);

    // Insere dados da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int PontoTuristico2 = 0;
    float DensidadePopulacional2 = 0;
    float pibPCapita2;
    float superPoder2;


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

    DensidadePopulacional2 = (float) populacao2 / area2;
    pibPCapita2 = pib2 / (float) populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float) PontoTuristico2 + pibPCapita2 + (1/DensidadePopulacional2);


    // Exibe os dados inseridos da carta 1 e 2

    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", PontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional1);
    printf("PIB per capita: %.2f reais \n", pibPCapita1);
    printf("O Super Poder é: %.2f \n", superPoder1);


    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", PontoTuristico2); 
    printf("Densidade Populacional: %.2f hab/km2 \n", DensidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", pibPCapita2); 
    printf("O Super Poder é: %.2f \n", superPoder2);

    printf("**************************************************************** \n");
    printf("***************       Resultados               ***************** \n");
    printf("População: ");
    if (populacao1>populacao2) {
        printf("Carta 1 venceu (%d) \n", populacao1>populacao2);
    } else {
        printf("Carta 2 venceu (%d) \n", populacao1>populacao2);
    }

    printf("Área: ");
    if (area1>area2) {
        printf("Carta 1 venceu (%d) \n", area1>area2);
    } else {
        printf("Carta 2 venceu (%d) \n", area1>area2);
    }

    printf("PIB: ");
    if (pib1>pib2) {
        printf("Carta 1 venceu (%d) \n", pib1>pib2);
    } else {
        printf("Carta 2 venceu (%d) \n", pib1>pib2);
    }
    
    printf("Pontos Turisticos: ");
    if (PontoTuristico1>PontoTuristico2) {
        printf("Carta 1 venceu (%d) \n", PontoTuristico1>PontoTuristico2);
    } else {
        printf("Carta 2 venceu (%d) \n", PontoTuristico1>PontoTuristico2);
    }

    printf("Densidade Populacional: ");
    if (DensidadePopulacional1>DensidadePopulacional2) {
        printf("Carta 1 venceu (%d) \n", DensidadePopulacional1>DensidadePopulacional2);
    } else {
        printf("Carta 2 venceu (%d) \n", DensidadePopulacional1>DensidadePopulacional2);
    }

    printf("PIB per capita: ");
    if (pibPCapita1<pibPCapita2) {
        printf("Carta 1 venceu (%d) \n", pibPCapita1>pibPCapita2);
    } else {
        printf("Carta 2 venceu (%d) \n", pibPCapita1>pibPCapita2);
    }

    printf("Super Poder: ");
    if (superPoder1>superPoder2) {
        printf("Carta 1 venceu (%d) \n", superPoder1>superPoder2);
    } else {
        printf("Carta 2 venceu (%d) \n", superPoder1>superPoder2);
    }
    printf("***************                                ***************** \n");
    printf("**************************************************************** \n");

    return 0;
}