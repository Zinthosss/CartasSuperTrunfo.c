#include <stdio.h>

int main(){

    // Dados das cartas
    char codigo1[4], codigo2[4];
    char estado1, estado2;
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    // =========================
    //      CADASTRO CARTA 1
    // =========================

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
 
    // =========================
    //      CADASTRO CARTA 2
    // =========================

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

    // =========================
    //          CÁLCULOS
    // =========================

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibpercapita1 = (float) pib1 / populacao1;
    pibpercapita2 = (float) pib2 / populacao2;

    // =========================
    //  MENU PRIMEIRO ATRIBUTO
    // =========================

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    scanf("%d", &atributo1);

    // =========================
    //  MENU SEGUNDO ATRIBUTO
    // =========================

    printf("\nEscolha o SEGUNDO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2){
        printf("Não pode escolher o mesmo atributo!\n");
        return 1;
    }

    // =========================
    // ATRIBUTO 1
    // =========================

    switch(atributo1){

        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;

        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;

        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;

        case 4:
            valor1_carta1 = pontosturisticos1;
            valor1_carta2 = pontosturisticos2;
            break;

        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            break;

        default:
            printf("Opcão inválida\n");
            return 1;
    }

    // =========================
    //        ATRIBUTO 2
    // =========================

    switch(atributo2){

        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;

        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;

        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;

        case 4:
            valor2_carta1 = pontosturisticos1;
            valor2_carta2 = pontosturisticos2;
            break;

        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            break;

        default:
            printf("Opção inválida\n");
            return 1;
    }

    // =========================
    //    SOMA DOS ATRIBUTOS
    // =========================

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // =========================
    //        RESULTADO
    // =========================

    printf("\nResultado:\n");

    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // operador ternario
    (soma1 > soma2) ? printf("Carta 1 venceu!\n") :
    (soma2 > soma1) ? printf("Carta 2 venceu!\n") :
    printf("Empate!\n");

    return 0;
}