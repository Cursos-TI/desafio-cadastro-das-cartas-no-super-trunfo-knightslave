#include <stdio.h>

int main() {

    char estado [20], estado_2 [20];
    char codigo [20], codigo_2 [20];
    char nome [20], nome_2 [20];
    unsigned long int populacao, populacao_2;
    float area, area_2;
    float PIB, PIB_2;
    int turisticos, turisticos_2;
    float densidade, densidade_2;
    float percapita, percapita_2;
    float superpoder, superpoder_2;
    int escolhadojogador, escolhadojogador_2;
    int resultado, resultado_2;

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

    printf("1. populacao.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("6. PIB per capita.\n");
    printf("7. Super Poder.\n");
    printf("\nEscolha: ");
    scanf(" %d", &escolhadojogador);

switch (escolhadojogador)
{

case 1:
    printf("carta 1 %lu vs %lu carta 2!\n", populacao, populacao_2);
    resultado = populacao > populacao_2 ? 1 : 0;
break;
case 2:
    printf("carta 1 %f vs %f carta 2!\n", area, area_2);
    resultado = area > area_2 ? 1 : 0;
break;
case 3:
    printf("carta 1 %f vs. %f carta 2!\n", PIB, PIB_2);
    resultado = PIB > PIB_2 ? 1 : 0;
break;
case 4:
    printf("carta 1 %d vs %d carta 2!\n", turisticos, turisticos_2);
    resultado = turisticos > turisticos_2 ? 1 : 0;
break;
case 5:
    printf("carta 1 %.2f vs %.2f carta 2!\n", densidade, densidade_2);
    resultado = densidade < densidade_2 ? 1 : 0;
break;
case 6:
    printf("carta 1 %2.f vs %2.f carta 2!\n", percapita, percapita_2);
    resultado = percapita > percapita_2 ? 1 : 0;
break;
case 7:
    printf("carta 1 %.2f vs %.2f carta 2!\n", superpoder, superpoder_2);
    resultado = superpoder > superpoder_2 ? 1 : 0;
break;
default:
    printf("Opção invalida");
}   

// Usuário escolhe o segundo atributo que deseja comparar
printf("Escolha o SEGUNDO atributo que deseja comparar:\n\n");
printf("1. populacao.\n");
printf("2. Área.\n");
printf("3. PIB.\n");
printf("4. Número de pontos turísticos.\n");
printf("5. Densidade demográfica.\n");
printf("6. PIB per capita.\n");
printf("7. Super Poder.\n");
printf("\nEscolha: ");
scanf("%d", &escolhadojogador_2);

if (escolhadojogador_2 == escolhadojogador)
{
    printf("\nERRO: A escolha do segundo atributo deve ser diferente do primeiro.\n\n");  
} 

else{

    switch (escolhadojogador)
    {
    
    case 1:
        printf("carta 1 %lu vs %lu carta 2\n", populacao, populacao_2);
        resultado_2 = populacao > populacao_2 ? 1 : 0;
    break;
    case 2:
        printf("carta 1 %f vs %f carta 2\n", area, area_2);
        resultado_2 = area > area_2 ? 1 : 0;
    break;
    case 3:
        printf("carta 1 %f vs. %f carta 2!\n", PIB, PIB_2);
        resultado_2 = PIB > PIB_2 ? 1 : 0;
    break;
    case 4:
        printf("carta 1 %d vs %d carta 2\n", turisticos, turisticos_2);
        resultado_2 = turisticos > turisticos_2 ? 1 : 0;
    break;
    case 5:
        printf("carta 1 %.2f vs %.2f carta 2\n", densidade, densidade_2);
        resultado_2 = densidade < densidade_2 ? 1 : 0;
    break;
    case 6:
        printf("carta 1 %2.f vs %2.f carta 2!\n", percapita, percapita_2);
        resultado_2 = percapita > percapita_2 ? 1 : 0;
    break;
    case 7:
        printf("carta 1 %.2f vs %.2f carta 2!\n", superpoder, superpoder_2);
        resultado_2 = superpoder > superpoder_2 ? 1 : 0;
    break;
    default:
        printf("Opção invalida");
    }   
}
if (resultado == 1 && resultado_2 == 1) {
    printf("Carta 1 - %s Venceu!\n\n", nome);
} else if (resultado == 0 && resultado_2 == 0) {
    printf("Carta 2 - %s Venceu!\n\n", nome_2);
} else {
    printf("\nEmpate!\n\n");
} 
float somacarta1 = 0.0, somacarta2 = 0.0;


switch (escolhadojogador) {
    case 1: somacarta1 += (float) populacao; break;
    case 2: somacarta1 += area; break;
    case 3: somacarta1 += PIB; break;
    case 4: somacarta1 += (float) turisticos; break;
    case 5: somacarta1 += densidade; break;
    case 6: somacarta1 += percapita; break;
    case 7: somacarta1 += superpoder; break;
}
switch (escolhadojogador_2) {
    case 1: somacarta1 += (float) populacao; break;
    case 2: somacarta1 += area; break;
    case 3: somacarta1 += PIB; break;
    case 4: somacarta1 += (float) turisticos; break;
    case 5: somacarta1 += densidade; break;
    case 6: somacarta1 += percapita; break;
    case 7: somacarta1 += superpoder; break;
}
switch (escolhadojogador) {
    case 1: somacarta2 += (float) populacao_2; break;
    case 2: somacarta2 += area_2; break;
    case 3: somacarta2 += PIB_2; break;
    case 4: somacarta2 += (float) turisticos_2; break;
    case 5: somacarta2 += densidade_2; break;
    case 6: somacarta2 += percapita_2; break;
    case 7: somacarta2 += superpoder_2; break;
}
switch (escolhadojogador_2) {
    case 1: somacarta2 += (float) populacao_2; break;
    case 2: somacarta2 += area_2; break;
    case 3: somacarta2 += PIB_2; break;
    case 4: somacarta2 += (float) turisticos_2; break;
    case 5: somacarta2 += densidade_2; break;
    case 6: somacarta2 += percapita_2; break;
    case 7: somacarta2 += superpoder_2; break;
}
printf("Soma dos atributos!\n");
printf("Carta 1 - %s => Soma: %.2f \n\nCarta 2 - %s => Soma: %.2f\n", nome, somacarta1, nome_2, somacarta2);

if (somacarta1 > somacarta2) {
    printf("Carta 1 - %s Venceu a rodada pela soma dos atributos!\n", nome);
} else if (somacarta1 < somacarta2) {
    printf("Carta 2 - %s Venceu a rodada pela soma dos atributos!\n", nome_2);
} else {
    printf("Empate na soma dos atributos!\n\n");
}

printf("Fim de jogo!\n");

    return 0;

}
