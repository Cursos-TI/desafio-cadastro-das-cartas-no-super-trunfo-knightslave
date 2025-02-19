#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[20];
    char codigo[20];
    char nome[20];
    int populacao;
    float area;
    float PIB;
    int turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s \nCódigo: %s\n", estado, codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \nÁrea(km²): %f \n", populacao, area);
    printf("PIB: %f \nNúmero de pontos turísticos: %d \n", PIB, turisticos);

    // Carta 02
    
    char estado_2[20];
    char codigo_2[20];
    char nome_2[20];
    int populacao_2;
    float area_2;
    float PIB_2;
    int turisticos_2;


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


    printf("Estado: %s \nCódigo: %s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s \n", nome_2);
    printf("População: %d \nÁrea(km²): %f \n", populacao_2, area_2);
    printf("PIB: %f \nNúmero de pontos turísticos: %d \n", PIB_2, turisticos_2);

    return 0;
}
