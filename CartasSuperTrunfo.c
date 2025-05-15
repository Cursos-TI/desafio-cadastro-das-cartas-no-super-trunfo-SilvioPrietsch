#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    //Declaração de variáveis.

    char Estado1[2], Estado2[2];
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1,area2;
    float Pib1, Pib2;
    int PontosTuristicos1, Pontosturisticos2;

    //Início do Jogo Super Trunfo- Países.

    printf("Jogo Super-Trunfo-Países\n");

    //Entrada de dados carta 1.

    printf("Carta 1\n");
    printf("Estado:\n");
    scanf("%s", &Estado1);

    printf("Código: \n");
    scanf("%s", codigo1);
    
    printf("Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área(em km²): \n");
    scanf("%f", &area1);

    printf("Pib: \n");
    scanf("%f", &Pib1);

    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    printf("\n");

    //Entrada de dados da carta 2

    printf("Carta 2\n");
    printf("Estado:\n");
    scanf("%s", &Estado2);

    printf("Código: \n");
    scanf("%s", codigo2);
    
    printf("Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área(em km²): \n");
    scanf("%f", &area2);

    printf("Pib: \n");
    scanf("%f", &Pib2);

    printf("Pontos Turísticos: \n");
    scanf("%d", &Pontosturisticos2);

    printf("\n");

    //Saída de dados carta 1.

    printf("CARTA 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área(em km²): %2fkm²\n", area1);
    printf("Pib: %2freais\n", Pib1);
    printf("Pontos turísticos: %d\n", PontosTuristicos1);
    printf("\n");

    //Saída de dados da carta 2.

    printf("CARTA 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área(em km²): %2f km²\n", area2);
    printf("Pib: $%2f reais\n", Pib2);
    printf("Pontos turísticos: %d\n", Pontosturisticos2);

    printf("\n");


    return 0;
}
