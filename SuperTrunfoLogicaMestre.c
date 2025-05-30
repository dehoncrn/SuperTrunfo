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

    printf("\n***Você deverá escolher dois atributos para comparar as cartas!***\n\n");
    
    int atributo1 = 0, atributo2 = 0;

    // Solicita ao usuário que escolha o primeiro atributo

    printf("\nEscolha o primeiro atributo\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf(" %d", &atributo1);

    // Verifica se o atributo escolhido é válido
    while (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida! Por favor, escolha uma opção válida (1 a 5).\n");
        scanf(" %d", &atributo1);
    }

    // Solicita ao usuário que escolha o segundo atributo

    printf("\nEscolha o segundo atributo\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf(" %d", &atributo2);
    
    // Verifica se o segundo atributo escolhido é válido
    while (atributo2 < 1 || atributo2 > 5) {
        printf("Opção inválida! Por favor, escolha uma opção válida (1 a 5).\n");
        scanf(" %d", &atributo2);
    }

    // Verifica se os atributos escolhidos são iguais
    while (atributo1 == atributo2) {
        printf("Você escolheu o mesmo atributo para comparar! Por favor, escolha atributos diferentes.\n");
        printf("\nEscolha o segundo atributo\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        scanf(" %d", &atributo2);
        while (atributo2 < 1 || atributo2 > 5) {
            printf("Opção inválida! Por favor, escolha uma opção válida (1 a 5).\n");
            scanf(" %d", &atributo2);
        }
    }

    // Compara os atributos escolhidos
    float poder1_attr1 = 0, poder2_attr1 = 0;
    float poder1_attr2 = 0, poder2_attr2 = 0;

    // Calcula o poder para o primeiro atributo escolhido
    switch (atributo1) {
        case 1:
            printf("Você escolheu comparar a População!\n");
            printf("População da Carta 1 (%s): %d\n", cidade1, populacao1);
            printf("População da Carta 2 (%s): %d\n", cidade2, populacao2);
            poder1_attr1 = populacao1;
            poder2_attr1 = populacao2;
            break;
        case 2:
            printf("Você escolheu comparar a Área!\n");
            printf("Área da Carta 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Área da Carta 2 (%s): %.2f km²\n", cidade2, area2);
            poder1_attr1 = area1;
            poder2_attr1 = area2;
            break;
        case 3:
            printf("Você escolheu comparar o PIB!\n");
            printf("PIB da Carta 1 (%s): %.2f\n", cidade1, pib1);
            printf("PIB da Carta 2 (%s): %.2f\n", cidade2, pib2);
            poder1_attr1 = pib1;
            poder2_attr1 = pib2;
            break;
        case 4:
            printf("Você escolheu comparar o Número de pontos turísticos!\n");
            printf("Pontos turísticos da Carta 1 (%s): %d\n", cidade1, pontosTuristicos1);
            printf("Pontos turísticos da Carta 2 (%s): %d\n", cidade2, pontosTuristicos2);
            poder1_attr1 = pontosTuristicos1;
            poder2_attr1 = pontosTuristicos2;
            break;
        case 5:
            printf("Você escolheu comparar a Densidade demográfica!\n");
            printf("Densidade demográfica da Carta 1 (%s): %.2f habitantes/km²\n", cidade1, inversoDensidadeDemografica1);
            printf("Densidade demográfica da Carta 2 (%s): %.2f habitantes/km²\n", cidade2, inversoDensidadeDemografica2);
            poder1_attr1 = inversoDensidadeDemografica1;
            poder2_attr1 = inversoDensidadeDemografica2;
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida (1 a 5).\n");
            break;
    }

    // Calcula o poder para o segundo atributo escolhido
    switch (atributo2) {
        case 1:
            printf("Você escolheu comparar a População!\n");
            printf("População da Carta 1 (%s): %d\n", cidade1, populacao1);
            printf("População da Carta 2 (%s): %d\n", cidade2, populacao2);
            poder1_attr2 = populacao1;
            poder2_attr2 = populacao2;
            break;
        case 2:
            printf("Você escolheu comparar a Área!\n");
            printf("Área da Carta 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Área da Carta 2 (%s): %.2f km²\n", cidade2, area2);
            poder1_attr2 = area1;
            poder2_attr2 = area2;
            break;
        case 3:
            printf("Você escolheu comparar o PIB!\n");
            printf("PIB da Carta 1 (%s): %.2f\n", cidade1, pib1);
            printf("PIB da Carta 2 (%s): %.2f\n", cidade2, pib2);
            poder1_attr2 = pib1;
            poder2_attr2 = pib2;
            break;
        case 4:
            printf("Você escolheu comparar o Número de pontos turísticos!\n");
            printf("Pontos turísticos da Carta 1 (%s): %d\n", cidade1, pontosTuristicos1);
            printf("Pontos turísticos da Carta 2 (%s): %d\n", cidade2, pontosTuristicos2);
            poder1_attr2 = pontosTuristicos1;
            poder2_attr2 = pontosTuristicos2;
            break;
        case 5:
            printf("Você escolheu comparar a Densidade demográfica!\n");
            printf("Densidade demográfica da Carta 1 (%s): %.2f habitantes/km²\n", cidade1, inversoDensidadeDemografica1);
            printf("Densidade demográfica da Carta 2 (%s): %.2f habitantes/km²\n", cidade2, inversoDensidadeDemografica2);
            poder1_attr2 = inversoDensidadeDemografica1;
            poder2_attr2 = inversoDensidadeDemografica2;
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida (1 a 5).\n");
            break;
    }

    float poder1 = poder1_attr1 + poder1_attr2;
    float poder2 = poder2_attr1 + poder2_attr2;

    printf("\nPoder total da Carta 1 (%s): %.2f\n", cidade1, poder1);
    printf("Poder total da Carta 2 (%s): %.2f\n", cidade2, poder2);

    if (poder1 > poder2) {
        printf("A Carta 1 (%s) vence!\n", cidade1);
    } else if (poder2 > poder1) {
        printf("A Carta 2 (%s) vence!\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    
    return 0;
    
}
