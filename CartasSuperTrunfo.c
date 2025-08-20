#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nome_do_estado[50];
    char codigo_carta[50];
    char nome_da_cidade[50];
    int populacao, numero_de_pontos_turisticos;
    float area, PIB;

    //Carta 1

    printf("Digite o codigo da carta: \n");
    scanf(" %s", &codigo_carta);
    printf("O codigo da carta é: %s\n", codigo_carta);

    // Codigo A01

    printf("Digite o nome do estado: \n");
    scanf(" %c", &nome_do_estado);
    printf("O nome do estado é: %c\n", nome_do_estado);

    // Estado A

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome_da_cidade);
    printf("O nome da cidade é: %s\n", nome_da_cidade);

    // Cidade: São Paulo

    printf("Digite a populacao: \n");
    scanf(" %d", &populacao);
    printf("A populacao é: %d\n", populacao);

    // Populaçao 12325000

    printf("Digite a area: \n");
    scanf(" %f", &area);
    printf("A area é: %.2f\n", area);

    // Area 1521.11 km²

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);
    printf("O PIB é: %.2f\n", PIB);

    // PIB 699.28 Bilhoes de reais

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos);
    printf("O numero de pontos turisticos é: %d\n", numero_de_pontos_turisticos);

    // Numero de pontos turisticos: 50

    // Fim da carta 1

    //Carta 2

    printf("Digite o codigo da carta: \n");
    scanf(" %s", &codigo_carta);
    printf("O codigo da carta é: %s\n", codigo_carta);

    // Codigo B02

    printf("Digite o nome do estado: \n");
    scanf(" %c", &nome_do_estado);
    printf("O nome do estado é: %c\n", nome_do_estado);

    // Estado B

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &nome_da_cidade);
    printf("O nome da cidade é: %s\n", nome_da_cidade);

    // Cidade: Rio de Janeiro

    printf("Digite a populacao: \n");
    scanf(" %d", &populacao);
    printf("A populacao é: %d\n", populacao);

    // Populaçao 6748000

    printf("Digite a area: \n");
    scanf(" %f", &area);
    printf("A area é: %.2f\n", area);

    // Area 1200.25 km²

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);
    printf("O PIB é: %.2f\n", PIB);

    // PIB 300.50 Bilhoes de reais

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos);
    printf("O numero de pontos turisticos é: %d\n", numero_de_pontos_turisticos);

    // Numero de pontos turisticos: 30

    printf("Codigo_carta: %s\n - nome_da_cidade: %s\n", codigo_carta, nome_da_cidade);
    printf("Nome_do_estado: %c\n - populaçao: %d\n", nome_da_cidade, populacao);
    printf("Area: %.2f\n - PIB: %.2f\n", area, PIB);
    printf("Numero_de_pontos_turisticos: %d\n", numero_de_pontos_turisticos);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
