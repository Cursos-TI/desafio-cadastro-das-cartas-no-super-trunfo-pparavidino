#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    printf("Digite o estado (A-H) da primeira carta: ");
    scanf(" %c", &Estado1);
    printf("Digite o codigo (ex:A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população: ");
    scanf(" %d", &Populacao1);
    printf("Digite a Area da cidade: ");
    scanf(" %f", &Area1);
    printf("Digite o PIB: ");
    scanf(" %f", &PIB1);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos1);

    printf("\nDigite o estado (A-H) da segunda carta: ");
    scanf(" %c", &Estado2);
    printf("Digite o codigo (ex:A01): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população: ");
    scanf(" %d", &Populacao2);
    printf("Digite a Area da cidade: ");
    scanf(" %f", &Area2);
    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    printf("\nCarta 1 cadastrada com sucesso!\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2 cadastrada com sucesso!\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
