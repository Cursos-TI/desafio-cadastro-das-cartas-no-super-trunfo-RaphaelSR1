#include <stdio.h>

int main(){

    //Declaração das variáveis para as duas cartas

    char estado1;
    char codigo1[50], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    char estado2;
    char codigo2[50], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos2);

    /*
    %d: Imprime um inteiro no formato decimal. (Exibe um número)
    %f: Imprime um número de ponto flutuante no formato padrão.
    %c: Imprime um único caractere.
    %s: Imprime um cadeia (string) de caracteres.
    %*c: Para ler e descartar o caractere restante no buffer.
    */

    printf("\n"); //Pula uma linha

    //Exibir cartas cadastradas
    printf("CARTA 1\n");
    printf("\n"); //Pula uma linha
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f milhão(ões) de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("\n"); //Pula uma linha

    printf("CARTA 2\n");
    printf("\n"); //Pula uma linha
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f milhão(ões) de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    
return 0;

}