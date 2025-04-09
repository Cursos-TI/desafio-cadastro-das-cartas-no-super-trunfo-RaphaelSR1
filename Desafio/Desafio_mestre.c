#include <stdio.h>

int main(){

    //Declaração das variáveis para as duas cartas

    char estado1, estado2;
    char codigo1[50], codigo2[50], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    float superpoder1, superpoder2;
        
    printf("xXx DESAFIO SUPER TRUNFO xXx\n");

        //Cadastro da carta 1

    printf("Insira os dados referentes a CARTA 1\n");

    printf("\n"); //Pula uma linha

    printf("Digite um letra de 'A' a 'H' para representar o estado: \n");
    scanf("%c%*c",&estado1);

    printf("Para o código da carta, digite a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);

    printf("\n"); //Pula uma linha

        //Cadastro da carta 2

    printf("Insira os dados referentes a carta 2\n");

    printf("\n"); //Pula uma linha

    printf("Digite uma letra de 'A' a 'H' para representar o estado:\n");
    scanf(" %c%*c", &estado2);

    printf("Para o código da carta, digite a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);

    densidade1 = (float) populacao1 / area1; //Cálculo da densidade populacional da carta 1
    densidade2 = (float) populacao2 / area2; //Cálculo da densidade populacional da carta 2

    pibpc1 = (float) pib1 / populacao1; //Cálculo do PIB per Capita da carta 1
    pibpc2 = (float) pib2 / populacao2; //Cálculo do PIB per Capita da carta 2

    /*
    %d: Imprime um inteiro no formato decimal. (Exibe um número)
    %f: Imprime um número de ponto flutuante no formato padrão.
    %c: Imprime um único caractere.
    %s: Imprime um cadeia (string) de caracteres.
    %*c: Para ler e descartar o caractere restante no buffer.
    */

    superpoder1 = (float)(populacao1 + area1 + pib1 + pontos1 + pibpc1);

    printf("\n"); //Pula uma linha

        //Exibir cartas cadastradas
    printf("CARTA 1\n");
    printf("\n"); //Pula uma linha
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f milhão(ões) de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    printf("Super Poder: %f\n", superpoder1);

    printf("\n"); //Pula uma linha

    printf("CARTA 2\n");
    printf("\n"); //Pula uma linha
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f milhão(ões) de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibpc2);
    
return 0;

}
