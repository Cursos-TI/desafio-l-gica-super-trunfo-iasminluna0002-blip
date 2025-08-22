#include <stdio.h>

int main() {
    // Carta 1 - Brasil
    char pais1[20] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 2000.0;
    int pontos1 = 100;
    float densidade1 = populacao1 / area1;

    // Carta 2 - Argentina
    char pais2[20] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 500.0;
    int pontos2 = 40;
    float densidade2 = populacao2 / area2;

    int opcao;
    printf("=== SUPER TRUNFO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("População: %d x %d\n", populacao1, populacao2);
            if(populacao1 > populacao2) printf("Vencedor: %s\n", pais1);
            else if(populacao2 > populacao1) printf("Vencedor: %s\n", pais2);
            else printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            if(area1 > area2) printf("Vencedor: %s\n", pais1);
            else if(area2 > area1) printf("Vencedor: %s\n", pais2);
            else printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            if(pib1 > pib2) printf("Vencedor: %s\n", pais1);
            else if(pib2 > pib1) printf("Vencedor: %s\n", pais2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("Pontos: %d x %d\n", pontos1, pontos2);
            if(pontos1 > pontos2) printf("Vencedor: %s\n", pais1);
            else if(pontos2 > pontos1) printf("Vencedor: %s\n", pais2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("Densidade: %.2f x %.2f\n", densidade1, densidade2);
            if(densidade1 < densidade2) printf("Vencedor: %s\n", pais1);
            else if(densidade2 < densidade1) printf("Vencedor: %s\n", pais2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
