#include <stdio.h>

int main () {


    // Variáveis para armazenar os dados das cartas
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2,
        superPoder1,superPoder2,
        pibPerCapita1, pibPerCapita2,
        inversoDensidadeDemografica1, inversoDensidadeDemografica2;
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[15], cidade2[15];


    // Solicita ao usuário que cadastre duas cartas
    // e coleta os dados necessários
    printf("Você deve cadastrar duas cartas!\n\n");
    
    printf("***Vamos começar pela Carta 1:***\n\n");

    printf("Digite o código do estado (letra maiúscula de A a H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (código do estado digitado seguido de um número de 01 a 04):\n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade1);
    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);
    printf("Número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosTuristicos1);
    
    printf("\n\n***Agora vamos para a Carta 2:***\n\n");
    
    printf("Digite o código do estado (letra maiúscula de A a H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (código do estado digitado seguido de um número de 01 a 04):\n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade2);
    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade:\n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);
    printf("Número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosTuristicos2);

    // Calcula os valores necessários para a comparação
    // entre as cartas
    pibPerCapita1 = pib1 / (float)populacao1;

    pibPerCapita2 = pib2 / (float)populacao2;

    inversoDensidadeDemografica1 = (float)populacao1 / area1;

    inversoDensidadeDemografica2 = (float)populacao2 / area2;

    superPoder1 = (
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontosTuristicos1 +
        (pib1 / (float)populacao1) +
        (area1  / (float)populacao1)
        )
        / 6;
    superPoder2 = (
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontosTuristicos2 +
        (pib2 / (float)populacao2) +
        (area2  / (float)populacao2)
        )
        / 6;

    // Exibe os dados das cartas
    printf("\n***Comparação das cartas:***\n");

        printf("Carta 1 - Pib per capita: %.2f\n", pibPerCapita1);
        printf("Carta 2 - Pib per capita: %.2f\n", pibPerCapita2);
    
        if(pibPerCapita1 > pibPerCapita2) {
            printf("Carta 1 venceu no PIB per capita!\n");
        } else if(pibPerCapita1 < pibPerCapita2) {
            printf("Carta 2 venceu no PIB per capita!\n");
        } else {
            printf("Empate no PIB per capita!\n");
        }

}
