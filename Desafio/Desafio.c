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

    printf("\n"); //Pula a linha

    printf("Digite um letra de 'A' a 'H' para representar o estado: \n");
    scanf("%c%*c",&estado1);

    return 0;

}