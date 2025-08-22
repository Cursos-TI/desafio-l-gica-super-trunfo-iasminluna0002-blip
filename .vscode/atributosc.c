#include <stdio.h>

int main() {
    int opcao;
    
    // Dados fixos das cartas
    char pais1[20] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0, pib1 = 2000.0, pontos1 = 100;
    float densidade1 = populacao1 / area1;

    char pais2[20] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0, pib2 = 500.0, pontos2 = 40;
    float densidade2 = populacao2 / area2;

    // Menu
    printf("===== Super Trunfo - Comparacao =====\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nPopulacao:\n");
            printf("%s: %d | %s: %d\n", pais1, populacao1, pais2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nArea:\n");
            printf("%s: %.2f | %s: %.2f\n", pais1, area1, pais2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nPIB:\n");
            printf("%s: %.2f | %s: %.2f\n", pais1, pib1, pais2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nPontos Turisticos:\n");
            printf("%s: %.0f | %s: %.0f\n", pais1, pontos1, pais2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nDensidade Demografica:\n");
            printf("%s: %.2f | %s: %.2f\n", pais1, densidade1, pais2, densidade2);
            if (densidade1 < densidade2) // menor vence
                printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}