#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    char cidade1[30] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    double pib1 = 699.28;
    int pontos1 = 50;

    // Carta 2 - Rio de Janeiro
    char cidade2[30] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    double pib2 = 300.50;
    int pontos2 = 30;

    // Comparações simples
    printf("=== Comparação ===\n");

    if (populacao1 > populacao2)
        printf("Maior população: %s\n", cidade1);
    else
        printf("Maior população: %s\n", cidade2);

    if (area1 > area2)
        printf("Maior área: %s\n", cidade1);
    else
        printf("Maior área: %s\n", cidade2);

    if (pib1 > pib2)
        printf("Maior PIB: %s\n", cidade1);
    else
        printf("Maior PIB: %s\n", cidade2);

    if (pontos1 > pontos2)
        printf("Mais pontos turísticos: %s\n", cidade1);
    else
        printf("Mais pontos turísticos: %s\n", cidade2);

    return 0;
}