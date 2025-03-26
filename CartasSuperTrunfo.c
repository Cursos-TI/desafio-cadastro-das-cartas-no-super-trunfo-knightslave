#include <stdio.h>

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
    float superpoder;
    int escolhadojogador;

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%lu", &populacao);

    printf("Área(km²): \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);
 
    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos);
    
    densidade = (float)(populacao / area);
    percapita = (float)(PIB / populacao);
    superpoder = (float) populacao + area + PIB + turisticos + percapita + (1.0 / densidade);

    printf(" *** Carta 1 *** \n");
    printf("Estado: %s \nCódigo: %s\n", estado, codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %lu \nÁrea(km²): %f \n", populacao, area);
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
    float superpoder_2;


    printf("Estado: \n");
    scanf("%s", estado_2);

    printf("Código: \n");
    scanf("%s", codigo_2);

    printf("Nome da cidade: \n");
    scanf("%s", nome_2);

    printf("População: \n");
    scanf("%lu", &populacao_2);

    printf("Área(km²): \n");
    scanf("%f", &area_2);

    printf("PIB: \n");
    scanf("%f", &PIB_2);
 
    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos_2);
  
    densidade_2 = (float)(populacao_2 / area_2);
    percapita_2 = (float)(PIB_2 / populacao_2);
    superpoder_2 = (float)(populacao_2 + area_2 + turisticos_2 + percapita_2 + 1.0 / densidade_2);

    printf(" *** Carta 2 *** \n");
    printf("Estado: %s \nCódigo: %s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s \n", nome_2);
    printf("População: %lu \nÁrea(km²): %f \n", populacao_2, area_2);
    printf("PIB: %f \nNúmero de pontos turísticos: %d \n", PIB_2, turisticos_2);
    printf("Densidade Populacional: %.2f \n", densidade_2);
    printf("PIB per capita:%.2f \n", percapita_2);
    printf("Super Poder: %.2f \n", superpoder_2);
    
    printf("*** Comparação das cartas***\n");

    printf("Escolha o atributo para poder compararmos\n");

    printf("1. Nome da cidade\n");
    printf("2. populacao\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos \n");
    printf("6. Densidade demográfica \n");
    scanf(" %d", &escolhadojogador);

switch (escolhadojogador)
{
case 1:
    printf(" %s %s",nome, nome_2);
    break;

case 2:

if (populacao > populacao_2){
    printf("carta 1 %lu vs %lu carta 2\n", populacao, populacao_2);
    printf("A carta número 1 ganhou!\n");
}else if (populacao < populacao_2){
    printf("carta 1 %lu vs %lu carta 2\n", populacao, populacao_2);
    printf("A carta numero 2 ganhou!\n");
}else{
    printf("carta 1 %lu vs %lu carta 2\n", populacao, populacao_2);
    printf("Houve um empate\n");
}
break;

case 3:
if (area > area_2){
    printf("carta 1 %f vs %f carta 2\n", area, area_2);
    printf("A carta numero 1 ganhou!\n");
}else if (area < area_2){
    printf("carta 1 %f vs %f carta 2\n", area, area_2);
    printf("A carta numero 2 ganhou!\n");
}else{
    printf("carta 1 %f vs %f carta 2\n", area, area_2);
    printf("Houve um empate\n");
}
break;

case 4:

if(PIB > PIB_2){
    printf("carta 1 %f vs. %f carta 2!\n", PIB, PIB_2);
    printf("A carta numero 1 ganhou!\n");
}else if (PIB < PIB_2){
    printf("carta 1 %f vs %f carta 2\n", PIB, PIB_2);
    printf("A carta numero 2 ganhou!\n");
}else{
    printf("carta 1 %f vs %f carta 2\n", PIB, PIB_2);
    printf("Houve um empate\n");
}
break;

case 5:

if (turisticos > turisticos_2){
    printf("carta 1 %d vs %d carta 2\n", turisticos, turisticos_2);
    printf("A carta numero 1 ganhou!\n");
}else if(turisticos < turisticos_2){
    printf("carta 1 %d vs %d carta 2\n", turisticos, turisticos_2);
    printf("A carta numero 2 ganhou!\n");
}else{
    printf("carta 1 %d vs %d carta 2\n", turisticos, turisticos_2);
    printf("Houve um empate\n");
}
break;

case 6:

if (densidade < densidade_2){
    printf("carta 1 %.2f vs %.2f carta 2\n", densidade, densidade_2);
    printf("A carta numero 1 ganhou!\n");
}else if(densidade > densidade_2){
    printf("carta 1 %.2f vs %.2f carta 2\n", densidade, densidade_2);
    printf("A carta numero 2 ganhou!\n");
}else{
    printf("carta 1 %.2f vs %.2f carta 2\n", densidade, densidade_2);
    printf("Houve um empate\n");
}
break;

default:
    printf("Opcao invalida");
    break;
}



printf("Fim de jogo!\n");

    return 0;

}
