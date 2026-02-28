#include <stdio.h>

int main(){
    char codigo1[4], codigo2[4];
    char estado1[20], estado2[20];
    char cidade1[50], cidade2[50];
    float area1, area2;
    float pib1, pib2;
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;

    // ESTADO 1

    printf("CARTA 1\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (uma letra): ");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade: "); //solicita o nome da cidade
    scanf("%49s", cidade1); //lê uma string de até 49 caracteres
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // ESTADO 2

    printf("\nCARTA 2\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (uma letra): ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2); //lê uma string de até 49 caracteres (sem espaço)

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\nCadastro realizado com sucesso!\n");

    return 0;
}

