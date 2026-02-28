#include <stdio.h>

int main(){
    char codigo1[4], codigo2[4];
    char estado1[20], estado2[20];
    char nomeCity1[20], nomeCity2[20];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // ESTADO 1

    printf("CARTA 1\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta (uma letra): ");
    scanf(" %c", &codigo1[0]);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCity1);

    printf("Digite a população: ");
    scanf("%f", &populacao1);

    printf("Digite a área (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // ESTADO 2

    printf("\nCARTA 2\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta (uma letra): ");
    scanf(" %c", &codigo2[0]);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCity2);

    printf("Digite a população: ");
    scanf("%f", &populacao2);

    printf("Digite a área (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\nCadastro realizado com sucesso!\n");

    return 0;
}

     