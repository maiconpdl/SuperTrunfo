#include <stdio.h>

int main() {
    
    //Declaração e inicialização de variáveis
    char estado1[1] = "A";
    char codigoCarta1[3] = "ABC"; 
    char nomeCidade1[20] = "";
    signed long int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int numPontosTuristicos1 = 0;
    double superPoderCarta1 = 0;

    char estado2[1] = "A";
    char codigoCarta2[3] = "ABC";
    char nomeCidade2[20] = "";
    signed long int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int numPontosTuristicos2 = 0;
    double superPoderCarta2 = 0;
    
    
    //Entrada de dados da carta 1
    printf("JOGO SUPERTRUNFO\n\n");
    printf("Primeira Carta\n\n");
    printf("Informe o estado: ");
    scanf("%s", estado1);
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
    printf("\n\n");
   
    
    //Entrada de dados da carta 2
    printf("Segunda Carta\n\n");
    printf("Informe o estado: ");
    scanf("%s", estado2); 
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
    printf("Informe o número de pontos turísticos:");
    scanf("%d", &numPontosTuristicos2);
    printf("\n\n");


    //Cálculod Densidade, PIB per capita e Super Poder
    float densidadepopulacional1 = 0;
    float pibpercapita1 = 0;
    float densidadepopulacional2 = 0;
    float pibpercapita2 = 0;
    densidadepopulacional1 = (float) populacao1 / area1;
    densidadepopulacional2 = (float) populacao2 / area2;

    //Para cálculo do PIB per capita, foi multiplicado o valor informado por 1 bilhão, pois o valor deve ser em bilhões
    pibpercapita1 = (float) pib1 * 1000000000 / populacao1;
    pibpercapita2 = (float) pib2 * 1000000000 / populacao2;
    superPoderCarta1 = populacao1 + area1 + pib1 + numPontosTuristicos1 + (1/densidadepopulacional1) + pibpercapita1;
    superPoderCarta2 = populacao2 + area2 + pib2 + numPontosTuristicos2 + (1/densidadepopulacional2) + pibpercapita2;
    

    //Ipressão da carta 1
    printf("Carta 1\n\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("\n\n");
    

    //Impressão da carta 2
    printf("Carta 2\n\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    

    //Impressão da comparação das cartas
    printf("\n\n");
    printf("Comparação de cartas:\n");
    printf("População: Carta 1 venceu (%d)\n",populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Número de Pontos Turísticos: Carta 1 venceu (%d)\n", numPontosTuristicos1 > numPontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (1/densidadepopulacional1) > (1/densidadepopulacional2));
    printf("PIB per capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCarta1 > superPoderCarta2);

    return 0;
}