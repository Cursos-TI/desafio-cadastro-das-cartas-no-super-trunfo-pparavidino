#include <stdio.h>
int main() {
    
    char Estado;
    char codigo[4];
    char cidade[50];
    int População;
    float Area;
    float PIB;
    int pontos_turisticos;

    printf("Digite o estado (A-h): ");
    scanf("%c", &Estado);
    printf("Digite o codigo (ex:A01): ");
    scanf("%s", &codigo );
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade );
    printf("Digite a população: ");
    scanf("%d", &População);
    printf("Digite a Area da cidade: ");
    scanf("%f", &Area);
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf(" Carta cadrastrada com sucesso!\n");
    printf(" Estado: %c\n", Estado );
    printf(" Codigo: %s\n", codigo );
    printf(" Cidade: %s\n", cidade );
    printf(" População: %d\n", População );
    printf(" Area: %f\n", Area );
    printf(" PIB: %f\n", PIB );
    printf(" Pontos Turisticos: %d\n", pontos_turisticos );

    return 0;

}
