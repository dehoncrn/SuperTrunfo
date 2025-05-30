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
    
    //Menu do Jogo
    printf("\n***Vamos jogar Super Trunfo!***\n\n");

    printf("\nAs cidades são: %s e %s\n", cidade1, cidade2);
    
    int(opcao);
    char(atributo[20]);

    printf("\n***Escolha uma das opções abaixo***\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Você escolheu comparar a População!\n");
        printf("População da Carta 1 (%s): %d\n", cidade1, populacao1);
        printf("População da Carta 2 (%s): %d\n", cidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("A Carta 1 (%s) vence com %d habitantes!\n", cidade1, populacao1);
        } else if (populacao2 > populacao1) {
            printf("A Carta 2 (%s) vence com %d habitantes!\n", cidade2, populacao2);
        } else {
            printf("As cartas têm a mesma população de %d habitantes!\n", populacao1);
        }
        /* code */
        break;
    case 2:
        printf("Você escolheu comparar a Área!\n");
        printf("Área da Carta 1 (%s): %.2f km²\n", cidade1, area1);
        printf("Área da Carta 2 (%s): %.2f km²\n", cidade2, area2);
        if (area1 > area2) {
            printf("A Carta 1 (%s) vence com uma área de %.2f km²!\n", cidade1, area1);
        } else if (area2 > area1) {
            printf("A Carta 2 (%s) vence com uma área de %.2f km²!\n", cidade2, area2);
        } else {
            printf("As cartas têm a mesma área de %.2f km²!\n", area1);
        }
        break;
    case 3:
        printf("Você escolheu comparar o PIB!\n");
        printf("PIB da Carta 1 (%s): %.2f\n", cidade1, pib1);
        printf("PIB da Carta 2 (%s): %.2f\n", cidade2, pib2);
        if (pib1 > pib2) {
            printf("A Carta 1 (%s) vence com um PIB de %.2f!\n", cidade1, pib1);
        } else if (pib2 > pib1) {
            printf("A Carta 2 (%s) vence com um PIB de %.2f!\n", cidade2, pib2);
        } else {
            printf("As cartas têm o mesmo PIB de %.2f!\n", pib1);
        }
        break;
    case 4:
        printf("Você escolheu comparar o Número de pontos turísticos!\n");
        printf("Pontos turísticos da Carta 1 (%s): %d\n", cidade1, pontosTuristicos1);
        printf("Pontos turísticos da Carta 2 (%s): %d\n", cidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("A Carta 1 (%s) vence com %d pontos turísticos!\n", cidade1, pontosTuristicos1);
        } else if (pontosTuristicos2 > pontosTuristicos1) {
            printf("A Carta 2 (%s) vence com %d pontos turísticos!\n", cidade2, pontosTuristicos2);
        } else {
            printf("As cartas têm o mesmo número de pontos turísticos: %d!\n", pontosTuristicos1);
        }
        break;
    case 5:
        printf("Você escolheu comparar a Densidade demográfica!\n");
        printf("Densidade demográfica da Carta 1 (%s): %.2f habitantes/km²\n", cidade1, inversoDensidadeDemografica1);
        printf("Densidade demográfica da Carta 2 (%s): %.2f habitantes/km²\n", cidade2, inversoDensidadeDemografica2);
        if (inversoDensidadeDemografica1 > inversoDensidadeDemografica2) {
            printf("A Carta 1 (%s) vence com uma densidade de %.2f habitantes/km²!\n", cidade1, inversoDensidadeDemografica1);
        } else if (inversoDensidadeDemografica2 > inversoDensidadeDemografica1) {
            printf("A Carta 2 (%s) vence com uma densidade de %.2f habitantes/km²!\n", cidade2, inversoDensidadeDemografica2);
        } else {
            printf("As cartas têm a mesma densidade demográfica de %.2f habitantes/km²!\n", inversoDensidadeDemografica1);
        }
        break;
      
    default:
        printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        break;
    }

 
}
