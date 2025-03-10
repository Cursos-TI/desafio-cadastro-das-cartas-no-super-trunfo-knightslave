#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char estado [20];
    char codigo [20];
    char nome [20];
    unsigned long int populacao;
    float area;
    float PIB;
    int turisticos;
    float densidade;
    float percapita;
    float inversodensidade;
    float superpoder;


    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Código: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área(km²): \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);
 
    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos);
    
    densidade = (float)(populacao / area);
    percapita = (float)(PIB / populacao);
    inversodensidade = (area / populacao);
    superpoder = (float)(populacao + area + PIB + turisticos + percapita + inversodensidade);

    printf(" *** Carta 1 *** \n");
    printf("Estado: %s \nCódigo: %s\n", estado, codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \nÁrea(km²): %f \n", populacao, area);
    printf("PIB: %f \nNúmero de pontos turísticos: %d \n", PIB, turisticos);
    printf("Densidade Populacional: %.2f \n", densidade);
    printf("PIB per capita:%.2f \n", percapita);
    printf("Super Poder: %.2f \n", superpoder);

    // Carta 02
    
    char estado_2 [20];
    char codigo_2 [20];
    char nome_2 [20];
    unsigned long int populacao_2;
    float area_2;
    float PIB_2;
    int turisticos_2;
    float densidade_2;
    float percapita_2;
    float inversodensidade_2;
    float superpoder_2;


    printf("Estado: \n");
    scanf("%s", &estado_2);

    printf("Código: \n");
    scanf("%s", &codigo_2);

    printf("Nome da cidade: \n");
    scanf("%s", &nome_2);

    printf("População: \n");
    scanf("%d", &populacao_2);

    printf("Área(km²): \n");
    scanf("%f", &area_2);

    printf("PIB: \n");
    scanf("%f", &PIB_2);
 
    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos_2);
  
    densidade_2 = (float)(populacao_2 / area_2);
    percapita_2 = (float)(PIB_2 / populacao_2);
    inversodensidade_2 = (float)(area_2 / populacao_2);
    superpoder_2 = (float)(populacao_2 + area_2 + turisticos_2 + percapita_2 + inversodensidade_2);

    printf(" *** Carta 2 *** \n");
    printf("Estado: %s \nCódigo: %s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s \n", nome_2);
    printf("População: %d \nÁrea(km²): %f \n", populacao_2, area_2);
    printf("PIB: %f \nNúmero de pontos turísticos: %d \n", PIB_2, turisticos_2);
    printf("Densidade Populacional: %.2f \n", densidade_2);
    printf("PIB per capita:%.2f \n", percapita_2);
    printf("Super Poder: %.2f", superpoder_2);
    
    return 0;

}
