#include <stdio.h>

int main() {
    
    //Declaração e inicialização de variáveis
    char estado1[1] = "A";
    char codigoCarta1[3] = "ABC"; 
    char nomeCidade1[20] = "abc";
    signed long int populacao1 = 0;
    float area1 = 0;
    float pib1 = 0;
    int numPontosTuristicos1 = 0;
    double superPoderCarta1 = 0;

    char estado2[1] = "A";
    char codigoCarta2[3] = "ABC";
    char nomeCidade2[20] = "abc";
    signed long int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int numPontosTuristicos2 = 0;
    double superPoderCarta2 = 0;
    
    int opcao = 0;

    //Menu de opções
    
    while (opcao != 2)
    {
        
        printf("JOGO SUPERTRUNFO\n\n");
        printf("Escolha uma opção:\n");
        printf("1 - Jogar\n");
        printf("2 - Sair\n");
        scanf("%d", &opcao);
    
    
        switch (opcao)
        {
        case 1:
            int opcaoJogo = 0;
            
            printf("Escolha uma opção:\n");
            printf("1 - Cadastrar cartas\n");
            printf("2 - Comparar cartas\n");
            printf("3 - Voltar ao menu principal\n");
            scanf("%d", &opcaoJogo);

            while (opcaoJogo != 3)
            {
            
            
                switch (opcaoJogo)
                {
                case 1:
                    
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
                    printf("Carta cadastrada com sucesso!\n\n");
                    printf("codigoCarta1: %s\n", codigoCarta1);
                    
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
                    printf("Carta cadastrada com sucesso!\n\n");
                    printf("codigoCarta2: %s\n", codigoCarta2);

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

                    break;
                case 2:
                    printf("codigo carta 1: %s\n", codigoCarta1);
                    printf("codigo carta 2: %s\n", codigoCarta2);
                    if(codigoCarta1 == "ABC" || codigoCarta2 == "ABC"){
                        printf("Cartas não cadastradas!\n");
                        break;
                    }else{
                        printf("Qual atributo comparar?\n");
                        printf("1 - População\n");
                        printf("2 - Área\n");
                        printf("3 - PIB\n");
                        printf("4 - Número de pontos turísticos\n");
                        printf("5 - Super Poder\n");
                        printf("6 - PIB per capita\n");
                        printf("7 - Densidade populacional\n");
                        printf("0 - Voltar\n");
                        int opcaoAtributo = 0;
                        scanf("%d", &opcaoAtributo);
                        switch (opcaoAtributo)
                        {
                        case 1:
                            printf("Comparação de cartas com base na população:\n");
                            printf("Carta 1: %d\n", populacao1);
                            printf("Carta 2: %d\n", populacao2);
                            if(populacao1 > populacao2){
                                printf("Resultado: Carta 1 venceu!\n");
                            }else{
                                printf("Resultado: Carta 2 venceu!\n");
                            }
                            break;
                        case 2:
                            printf("Comparação de cartas com base na área:\n");
                            printf("Carta 1: %.2f\n", area1);
                            printf("Carta 2: %.2f\n", area2);
                            if(area1 > area2){
                                printf("Resultado: Carta 1 venceu!\n");
                            }else{
                                printf("Resultado: Carta 2 venceu!\n");
                            }
                            break;
                        case 3:
                            printf("Comparação de cartas com base no PIB:\n");
                            printf("Carta 1: %.2f\n", pib1);
                            printf("Carta 2: %.2f\n", pib2);
                            if(pib1 > pib2){
                                printf("Resultado: Carta 1 venceu!\n");
                            }else{
                                printf("Resultado: Carta 2 venceu!\n");
                            }
                            break;
                        case 4:
                            printf("Comparação de cartas com base no número de pontos turísticos:\n");
                            printf("Carta 1: %d\n", numPontosTuristicos1);
                            printf("Carta 2: %d\n", numPontosTuristicos2);
                            if(numPontosTuristicos1 > numPontosTuristicos2){
                                printf("Resultado: Carta 1 venceu!\n");
                            }else{
                                printf("Resultado: Carta 2 venceu!\n");
                            }
                            break;
                        case 5:
                            printf("Comparação de cartas com base no Super Poder:\n");
                            printf("Carta 1: %.2f\n", superPoderCarta1);
                            printf("Carta 2: %.2f\n", superPoderCarta2);
                            if(superPoderCarta1 > superPoderCarta2){
                                printf("Resultado: Carta 1 venceu!\n");
                            }else{
                                printf("Resultado: Carta 2 venceu!\n");
                            }
                            break;
                        case 6:
                            printf("Comparação de cartas com base no PIB per capita:\n");
                            printf("Carta 1: %.2f\n", pibpercapita1);
                            printf("Carta 2: %.2f\n", pibpercapita2);
                            if(pibpercapita1 > pibpercapita2){
                                printf("Resultado: Carta 1 venceu!\n");
                            }else{
                                printf("Resultado: Carta 2 venceu!\n");
                            }
                            break;
                        case 7:
                            printf("Comparação de cartas com base na densidade populacional:\n");
                            printf("Carta 1: %.2f\n", densidadepopulacional1);
                            printf("Carta 2: %.2f\n", densidadepopulacional2);
                            if(densidadepopulacional1 < densidadepopulacional2){
                                printf("Resultado: Carta 1 venceu!\n");
                            }else{
                                printf("Resultado: Carta 2 venceu!\n");
                            }
                            break;
                        
                    }
                    break;
                }
                break;
                case 3:
                    opcaoJogo = 3;
                    break;
                
                default:
                    printf("Opção inválida!\n");
                    break;
                }
            }

            break;
        case 2:
            printf("Saindo do jogo...\n");
            opcao = 2;
            break;
        case 0:
            
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }

    
    
    

    return 0;
}