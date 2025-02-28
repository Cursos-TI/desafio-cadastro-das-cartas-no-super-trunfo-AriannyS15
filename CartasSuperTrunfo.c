#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
     // Declarando Variavel Carta 1

    char estado;
    char codigo;
    char cidade; 
    int populacao;
    int pontoturistico;
    float area;
    float pib;

    printf  ("Digite seu estado: \n");
    scanf ("%s", &estado);

    printf ("Codigo Da Cidade: \n");
    scanf ("%s", &codigo);

    printf ("Nome Da Cidade: \n");
    scanf("%s", &cidade);

    printf ("Total De Habitantes: \n");
    scanf ("%d", &populacao);

    printf ("Quantidade De Pontos Turisticos: \n");
    scanf ("%d", &pontoturistico);

    printf ("Area: \n");
    scanf ("%f", &area);

    printf ("pib: \n");
    scanf ("%f", &pib);

    printf ("Carta 1! \n");
    printf ("Estado: %s %s \n", estado, codigo);
    printf ("cidade: %s \n", cidade);
    printf ("Habitantes: %d \n", populacao);
    printf ("Pontos Turisticos: %d \n", pontoturistico);
    printf ("Area: %f \n", area);
    printf ("Pib: %f \n", pib);

    //   Declarando Variavel Carta 2

    char estado_2;
    char codigo_2;
    char cidade_2;
    int populacao_2;
    int pontoturistico_2;
    float area_2;
    float pib_2;

    printf  ("Digite seu estado: \n");
    scanf ("%s", &estado_2);

    printf ("Codigo Da Cidade: \n");
    scanf ("%s", &codigo_2);

    printf ("Nome Da Cidade: \n");
    scanf("%s", &cidade_2);

    printf ("Total De Habitantes: \n");
    scanf ("%d", &populacao_2);

    printf ("Quantidade De Pontos Turisticos: \n")
    scanf("%d", &pontoturistico_2);

    printf ("Area: \n");
    scanf ("%f", &area_2);

    printf ("pib: \n");
    scanf ("%f", &pib_2);

    printf("Carta 2! \n");
    printf("Estado_2 %s \n", estado_2);
    printf("Codigo_2 %s \n", codigo_2);
    printf("Cidade_2 %s \n", cidade_2);
    printf("Habitantes_2 %d \n", populacao_2);
    printf("pontoturistico_2 %d \n", pontoturistico_2);
    printf("area_2 %f \n", area_2);
    printf("pib_2 %f \n", pib_2);

    return 0;
}
   