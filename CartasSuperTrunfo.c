#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int Populacao1, Populacao2;
    float Area1, Area2;
    double PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float DensidadePop1, DensidadePop2;
    double PIBperCapita1, PIBperCapita2;
    float InversoDensidade1, InversoDensidade2;
    float SuperPoder1, SuperPoder2;

    // Entrada da primeira carta
    printf("Digite o estado (A-H) da primeira carta: ");
    scanf(" %c", &Estado1);
    printf("Digite o código (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população: ");
    scanf(" %lu", &Populacao1);
    printf("Digite a área da cidade: ");
    scanf(" %f", &Area1);
    printf("Digite o PIB: ");
    scanf(" %lf", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // Entrada da segunda carta
    printf("\nDigite o estado (A-H) da segunda carta: ");
    scanf(" %c", &Estado2);
    printf("Digite o código (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população: ");
    scanf(" %lu", &Populacao2);
    printf("Digite a área da cidade: ");
    scanf(" %f", &Area2);
    printf("Digite o PIB: ");
    scanf(" %lf", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Cálculos
    DensidadePop1 = Populacao1 / Area1;
    DensidadePop2 = Populacao2 / Area2;
    PIBperCapita1 = PIB1 / (double)Populacao1;
    PIBperCapita2 = PIB2 / (double)Populacao2;
    InversoDensidade1 = 1 / DensidadePop1;
    InversoDensidade2 = 1 / DensidadePop2;

    SuperPoder1 = Populacao1 + Area1 + PIB1 + pontos_turisticos1 + PIBperCapita1 + InversoDensidade1;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + pontos_turisticos2 + PIBperCapita2 + InversoDensidade2;

    // Exibição das cartas
    printf("\nCarta 1 cadastrada com sucesso!\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2lf\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2lf\nSuper Poder: %.2f\n",
           Estado1, codigo1, cidade1, Populacao1, Area1, PIB1, pontos_turisticos1, DensidadePop1, PIBperCapita1, SuperPoder1);

    printf("\nCarta 2 cadastrada com sucesso!\n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f\nPIB: %.2lf\nPontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2lf\nSuper Poder: %.2f\n",
           Estado2, codigo2, cidade2, Populacao2, Area2, PIB2, pontos_turisticos2, DensidadePop2, PIBperCapita2, SuperPoder2);

    // Comparação das cartas
    printf("\nCOMPARAÇÃO DE CARTAS:\n");
    printf("População: Carta %d venceu (%d)\n", Populacao1 > Populacao2 ? 1 : 2, Populacao1 > Populacao2);
    printf("Área: Carta %d venceu (%d)\n", Area1 > Area2 ? 1 : 2, Area1 > Area2);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2, pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", DensidadePop1 < DensidadePop2 ? 1 : 2, DensidadePop1 < DensidadePop2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", PIBperCapita1 > PIBperCapita2 ? 1 : 2, PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", SuperPoder1 > SuperPoder2 ? 1 : 2, SuperPoder1 > SuperPoder2);

    return 0;
}
