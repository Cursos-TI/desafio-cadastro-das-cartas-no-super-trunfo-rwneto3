#include <stdio.h>

// Cadastro das Cartas - Super Trunfo - Novato - Versão 2
// Versão 2.0 com comentários desnecessários removidos e código depurado

int main() {
    // Declaração das variáveis
    char Estado1[20], CodigoDaCarta1[3], NomeDaCidade1[20];
    int Populacao1, NumeroDePontosTuristicos1;
    float Area1, PIB1;

    char Estado2[20], CodigoDaCarta2[3], NomeDaCidade2[20];
    int Populacao2, NumeroDePontosTuristicos2;
    float Area2, PIB2;

    // Entrada de dados da Carta 1
    printf("Digite o Estado da Carta 1: ");
    scanf("%s", Estado1);

    printf("Digite o Código da Carta 1 (Ex. A01): ");
    scanf("%s", CodigoDaCarta1);

    printf("Digite o nome da Cidade da Carta 1 (SEM ESPAÇOS): ");
    scanf("%s", NomeDaCidade1);

    printf("Digite a população da Cidade da Carta 1: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área da cidade da Carta 1 (Km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB da Cidade da Carta 1: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &NumeroDePontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("Digite o Estado da Carta 2: ");
    scanf("%s", Estado2);

    printf("Digite o Código da Carta 2 (Ex. B02): ");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o nome da Cidade da Carta 2 (SEM ESPAÇOS): ");
    scanf("%s", NomeDaCidade2);

    printf("Digite a população da Cidade da Carta 2: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área da cidade da Carta 2 (Km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade da Carta 2: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &NumeroDePontosTuristicos2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", Estado1, CodigoDaCarta1, NomeDaCidade1);
    printf("População: %d habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\n", Populacao1, Area1, PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", Estado2, CodigoDaCarta2, NomeDaCidade2);
    printf("População: %d habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\n", Populacao2, Area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);

    return 0;
}
