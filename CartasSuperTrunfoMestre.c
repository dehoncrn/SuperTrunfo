#include <stdio.h>

int main () {

    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2,
        superPoder1,superPoder2,
        pibPerCapita1, pibPerCapita2,
        inversoDensidadeDemografica1, inversoDensidadeDemografica2;
    char estado1, estado2, codigo1[3], codigo2[3], cidade1[15], cidade2[15];

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

    printf("***Comparação das cartas:***\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 0);
    printf("Densidade demográfica: Carta 1 venceu (%d)\n", inversoDensidadeDemografica1 > inversoDensidadeDemografica2 ? 1 : 0);
    //printf("Super poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);
    printf("Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);
          
    /*printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f Km2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("O PIB per capita da cidade é: %.2f reais\n", pib1 / (float)populacao1);
    printf("A densidade demográfica da cidade é: %.2f habitantes por Km2\n", (float)populacao1 / area1);
    printf("O super poder da carta 1 é: %.2f pontos \n", superPoder1 = ((float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (pib1 / (float)populacao1) + (area1  / (float)populacao1)) / 6);
        
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f Km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("O PIB per capita da cidade é: %.2f reais\n", pib2 / populacao2);
    printf("A densidade demográfica da cidade é: %.2f habitantes por Km2\n", populacao2 / area2);
    printf("O super poder da carta 2 é: %.2f pontos \n", superPoder2 = ((float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (pib2 / (float)populacao2) + (area2  / (float)populacao2)) / 6);
    */

}
