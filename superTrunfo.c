#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3] = "";
    char nomeCidade1[20], nomeCidade2[20] = "";
    int populacao1, populacao2 = 0;
    float area1, area2 = 0;
    float pib1, pib2 = 0;
    int numPontosTuristicos1, numPontosTuristicos2 = 0;


    printf("JOGO SUPERTRUNFO\n\n");
    printf("Primeira Carta\n\n");
    printf("Informe o estado: ");
    scanf(" %c", &estado1);
    printf("Informe o código da carta: ");
    scanf("%s", codigoCarta1);
    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área: ");
    scanf("%f", &area1);
    printf("Informe o PIB: ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos1);
    

    printf("Segunda Carta\n\n");
    printf("Informe o estado: ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta: ");
    scanf("%s", codigoCarta2);
    printf("Informe o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área: ");
    scanf("%f", &area2);
    printf("Informe o PIB: ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos2);
    printf("\n\n");
    

    printf("Carta %s\n\n", codigoCarta1);
    printf("Estado:  %c\n", estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("\n\n");

    
    printf("Carta %s\n\n", codigoCarta2);
    printf("Estado:  %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d", numPontosTuristicos2);

    return 0;
}