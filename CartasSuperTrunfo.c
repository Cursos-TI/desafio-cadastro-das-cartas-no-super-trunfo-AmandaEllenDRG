#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha
    #include <stdio.h>

    int main() {
        // Estava com dificuldades com scan("%s") para exibição de cidade com espaço.
        // Fiz algumas pesquisas pelo youtube e encontrei uma forma para apresentar melhor.
        // Declaração das variáveis para a Carta 01
        char estado;
        char codigo[3];
        char cidade[50];
        float populacao;  
        float area;
        float pib;
        int pontos_turisticos;
    
        // Carta Número 01
        // Digite uma letra de 'A' a 'H' representando um Estado
        printf("Carta Número 01\n");
        printf("Estado: ");
        scanf(" %c", &estado);  
    
        // Escreva a primeira letra do Estado escolhido e um número de 01 a 04
        printf("Código: ");
        scanf("%s", codigo);  
    
        // Escolha o nome de uma Cidade
        printf("Cidade: ");
        scanf(" %[^\n]s", cidade);  
    
        // Escreva o número de habitantes da Cidade
        printf("População: ");
        scanf("%f", &populacao);  
    
        // Escreva a Área em quilômetros quadrados
        printf("Área em km²: ");
        scanf("%f", &area);  
    
        // Escreva o Produto Interno Bruto da Cidade (PIB)
        printf("PIB: ");
        scanf("%f", &pib);  
    
        // Escreva a quantidade de pontos turísticos que esta Cidade possui
        printf("Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos);  
    
        // Carta Número 02
        printf("\nCarta Número 02\n");
        char estado2;
        char codigo2[3];
        char cidade2[50];
        float populacao2;  
        float area2;
        float pib2;
        int pontos_turisticos2;
    
        // Digite uma letra de 'A' a 'H' representando um Estado
        printf("Estado: ");
        scanf(" %c", &estado2);  
    
        // Escreva a primeira letra do Estado escolhido e um número de 01 a 04
        printf("Código: ");
        scanf("%s", codigo2);  
    
        // Escolha o nome de uma Cidade
        printf("Cidade: ");
        scanf(" %[^\n]s", cidade2);  
    
        // Escreva o número de habitantes da Cidade
        printf("População: ");
        scanf("%f", &populacao2);  
    
        // Escreva a Área em quilômetros quadrados
        printf("Área em km²: ");
        scanf("%f", &area2);  
    
        // Escreva o Produto Interno Bruto da Cidade (PIB)
        printf("PIB: ");
        scanf("%f", &pib2);  
    
        // Escreva a quantidade de pontos turísticos que esta Cidade possui
        printf("Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos2); 
    
        // Carta 03
        printf("\nCarta Número 03\n");
    
        char estado_carta_02 = 'B';
        char codigo_carta_02[3] = "B01";
        char cidade_carta_02[50] = "Belo Horizonte";
        float populacao_carta_02 = 2315560.0;  
        float area_carta_02 = 331.354;
        float pib_carta_02 = 105829675.053;
        int pontos_turisticos_carta_02 = 40;
    
        printf("Estado: %c\n", estado_carta_02);
        printf("Código: %s\n", codigo_carta_02);
        printf("Cidade: %s\n", cidade_carta_02);
        printf("População: %.0f\n", populacao_carta_02);  
        printf("Área: %.2f km²\n", area_carta_02);
        printf("PIB: %.2f\n", pib_carta_02);
        printf("Pontos Turísticos: %d\n", pontos_turisticos_carta_02);
    
        // Carta 04
        printf("\nCarta Número 04\n");
    
        char estado_carta_03 = 'G';
        char codigo_carta_03[3] = "G02";
        char cidade_carta_03[50] = "Porto Alegre";
        float populacao_carta_03 = 1.5;  
        float area_carta_03 = 496.8;
        float pib_carta_03 = 54.0;
        int pontos_turisticos_carta_03 = 50;
    
        printf("Estado: %c\n", estado_carta_03);
        printf("Código: %s\n", codigo_carta_03);
        printf("Cidade: %s\n", cidade_carta_03);
        printf("População: %.0f\n", populacao_carta_03);  
        printf("Área: %.2f km²\n", area_carta_03);
        printf("PIB: %.2f\n", pib_carta_03);
        printf("Pontos Turísticos: %d\n", pontos_turisticos_carta_03);
    
        return 0;
    }


