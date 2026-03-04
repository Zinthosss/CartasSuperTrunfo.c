#include <stdio.h>

int main(){
    char codigo1[4], codigo2[4];
    char estado1, estado2;
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // ESTADO 1

    printf("CARTA 1\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (uma letra): ");
    scanf(" %3s", codigo1);
    
    printf("Digite o nome da cidade: "); //solicita o nome da cidade
    scanf("%49s", cidade1); //lê uma string de até 49 caracteres
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    
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
    scanf("%lu", &populacao2);
   
    printf("Digite a área (km2): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;
    superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1.0 / densidade1);
    superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1.0 / densidade2);
    //quanto menor a densidade, maior o "poder"

    printf("\nCadastro realizado com sucesso!\n");

    // Resultados
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Comparações
    printf("\n Comparação de Cartas: \n");

        if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else if (populacao1 < populacao2) {
        printf("População: Carta 2 venceu (0)\n");
    } 

        if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else if (area1 < area2) {
        printf("Área: Carta 2 venceu (0)\n");
    } 

        if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else if (pib1 < pib2) {
        printf("PIB: Carta 2 venceu (0)\n");
    }

        if (pontosturisticos1 > pontosturisticos2) {
        printf("Pontos turísticos: Carta 1 venceu (1)\n");
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("Pontos turísticos: Carta 2 venceu (0)\n");
    }

        if (densidade1 < densidade2) {
        printf("Densidade populacional: Carta 1 venceu (1)\n");
    } else if (densidade2 < densidade1) {
        printf("Densidade populacional: Carta 2 venceu (0)\n");
    }

        if (pibpercapita1 > pibpercapita2) {
        printf("PIB per capita: Carta 1 venceu (1)\n");
    } else if (pibpercapita1 < pibpercapita2) {
        printf("PIB per capita: Carta 2 venceu (0)\n");
    }

        if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else if (superpoder1 < superpoder2) {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}

