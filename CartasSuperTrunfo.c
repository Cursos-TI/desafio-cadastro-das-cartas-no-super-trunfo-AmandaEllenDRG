#include <stdio.h>

int main() {
    // Carta 1
    char Estado1;
    char Codigo1[4];
    char Cidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int PontosT1;
    float Densidade1;
    float PerCapita1;
    float SuperPoder1;


    // Carta 2
    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int PontosT2;
    float Densidade2;
    float PerCapita2;
    float SuperPoder2;
    int Carta1, Carta2;

    // Entrada dos dados da Carta 1
    printf("Carta 1\n");

    // Digite uma letra de 'A' a 'H' representando um Estado
    printf("Estado: \n");
    scanf("%c", &Estado1);

    // Escreva a primeira letra do Estado escolhido e um número de 01 a 04
    printf("Código: \n");
    scanf("%s", Codigo1);

    // Escolha o nome de uma Cidade
    printf("Cidade: \n");
    scanf(" %[^\n]", Cidade1); 
    getchar();

/*Se eu usasse só scanf("%s", Cidade);, ele não deixava digitar nomes de cidade com espaço, tipo 
“Belo Horizonte” ou “Porto Alegre”. Ele só lia a primeira palavra e ignorava o resto indo direto
para o final do programa. Pesquisei e achei essa forma, que lê tudo até com espaço.*/

/*Mas aí apareceu outro problema depois de ler a cidade, o Enter que usava no final do nome da cidade
ainda ficava pulando, e isso fazia o programa pular para o final direto, sem esperar entrar com
outros dados, pesquisei e usei o getchar(); só pra limpar esse pulo do final.*/



    // Escreva o número de habitantes da Cidade
    printf("População: \n");
    scanf("%u", &Populacao1);

    // Escreva a Área em quilômetros quadrados
    printf("Área: \n");
    scanf("%f", &Area1);

     // Escreva o Produto Interno Bruto da Cidade (PIB)
    printf("PIB: \n");
    scanf("%f", &Pib1);

     // Escreva a quantidade de pontos turísticos que esta Cidade possui
    printf("Pontos Turísticos: ");
    scanf("%d", &PontosT1);

    //Divisão Densidade Populacional e PIB
    Densidade1 = Populacao1 / Area1;
    PerCapita1 = Pib1 / Populacao1;

    SuperPoder1 = (float)Populacao1 + Area1 + Pib1 + (float)PontosT1 + PerCapita1;
    
    // Entrada dos dados da Carta 2
    printf("Carta 2\n");

    printf("Estado: \n");
    scanf(" %c", &Estado2);

    printf("Código: \n");
    scanf("%s", Codigo2);

    printf("Cidade: \n");
    scanf(" %[^\n]", Cidade2);
    getchar();

    printf("População: \n");
    scanf("%u", &Populacao2);

    printf("Área: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &Pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &PontosT2);

    // Divisão Densidade Populacional e PIB
    Densidade2 = Populacao2 / Area2;
    PerCapita2 = Pib2 / Populacao2;

    SuperPoder2 = (float)Populacao2 + Area2 + Pib2 + (float)PontosT2 + PerCapita2;

    //Comparações Carta 1 e 2
    int vPopulacao = Populacao1 > Populacao2;
    int vArea = Area1 > Area2;
    int vPib = Pib1 > Pib2;
    int vPontosT = PontosT1 > PontosT2;
    int vDensidade = Densidade1 < Densidade2;
    int vPerCapita = PerCapita1 > PerCapita2;
    int vSuperPoder = SuperPoder1 > SuperPoder2;
    int Resultado = Carta1 > Carta2;


    // Impressão dados carta 1 
    printf("Dados da Carta 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f bilhões\n", Pib1);
    printf("Pontos Turísticos: %d\n", PontosT1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB Per Capita: %.2f reais\n", PerCapita1);

    //Impressão dados carta 2 
    printf("Dados da Carta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", Pib2);
    printf("Pontos Turísticos: %d\n", PontosT2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB Per Capita: %.2f reais\n", PerCapita2);

    printf("***Comparação Carta 1 e 2***\n");
    printf("População: %d\n", vPopulacao);
    printf("Área: %d\n", vArea);
    printf("PIB: %d\n", vPib);
    printf("Pontos Turísticos: %d\n", vPontosT);
    printf("Densidade Populacional: %d\n", vDensidade);
    printf("PIB per Capita: %d\n",vPib);
    printf("Super Poder: %d\n", vSuperPoder);
    printf("Resultado: A Carta 1 é maior que a Carta 2? %d\n", Resultado);

    /*O resultado número 0 indica que a Carta 2 é a vencedora, já o número 1 indica que a Carta 1 
    é a vencedora */
    // 1 para verdadeiro e 0 para falso
    return 0;
}