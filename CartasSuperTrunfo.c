#include <stdio.h>

// Desafio Super Trunfo - Novatos
// Tema 1 - Cadastro das Cartas

int main() {
   
    //Declara as variáveis da CARTA 1

    char Estado1[20]; //Declara um array de 20 caracteres chamado Estado1
    char CodigoDaCarta1[3]; //Declara um array de 3 caracteres CodigoDaCarta1
    char NomeDaCidade1[20]; //Declara um array de 20 caracteres NomeDaCidade1
    int Populacao1; //Declara a variável inteira Populacao1
    float Area1; //Declara a variável de ponto flutuante Area1
    float PIB1; //Declara a variável ponto flutuante PIB1
    int NumeroDePontosTuristicos1; //Declara a variável inteira NumeroDePontosTuristicos1

    //Declara as variáveis da CARTA 2

    char Estado2[20]; //Declara um array de 20 caracteres chamado Estado2
    char CodigoDaCarta2[3]; //Declara um array de 3 caracteres CodigoDaCarta2
    char NomeDaCidade2[20]; //Declara um array de 20 caracteres NomeDaCidade2
    int Populacao2; //Declara a variável inteira Populacao2
    float Area2; //Declara a variável de ponto flutuante Area2
    float PIB2; //Declara a variável ponto flutuante PIB2
    int NumeroDePontosTuristicos2; //Declara a variável inteira NumeroDePontosTuristicos2

        
    // Solicita ao usuário que insira as informações da CARTA 1
        printf("Digite o Estado da Carta 1: \n");
        scanf("%s", Estado1); //armazena o valor Estado na variável Estado

        printf("Digite o Código da Carta 1,composta de uma letra maiúscula, de A até H, e dois algarismos, ex. A01: \n");
        scanf("%s", CodigoDaCarta1); //armazena o valor do Código da carta na variável CodigoDaCarta1, especificando o formato

        printf("Digite o nome da Cidade da Carta 1: \n");
        scanf("%s", NomeDaCidade1); //armazena o valor Cidade na variável NomeDaCidade1

        printf("Digite a população da Cidade da Carta 1: \n");
        scanf("%d", &Populacao1); //armazena o valor da População na variável Populacao1

        printf("Digite a Área da cidade da Carta 1, em Km²: \n");
        scanf("%f", &Area1); //armazena o valor Estado na variável Area1

        printf("Digite 0 valor do PIB da Cidade da Carta 1: \n");
        scanf("%f", &PIB1); //armazena o valor Estado na variável PIB1

        printf("Digite o número de pontos turísticos da cidade da Carta 1: \n");
        scanf("%d", &NumeroDePontosTuristicos1); //armazena o valor Estado na variável NumeroDePontosTuristicos1

        
    // Solicita ao usuário que insira as informações da CARTA 2
        printf("Digite o Estado da Carta 2: \n");
        scanf("%s", Estado2); //armazena o valor Estado na variável Estado2

        printf("Digite o Código da Carta 2,composta de uma letra maiúscula, de A até H, e dois algarismos, ex. B02: \n");
        scanf("%s", CodigoDaCarta2); //armazena o valor do Código da carta na variável CodigoDaCarta2, especificando o formato

        printf("Digite o nome da Cidade da Carta 2: \n");
        scanf("%s", NomeDaCidade2); //armazena o valor Cidade na variável NomeDaCidade2

        printf("Digite a população da Cidade da Carta 2: \n");
        scanf("%d", &Populacao2); //armazena o valor da População na variável Populacao2

        printf("Digite a Área da cidade da Carta 2, em Km²: \n");
        scanf("%f", &Area2); //armazena o valor Estado na variável Area2

        printf("Digite 0 valor do PIB da Cidade da Carta 2: \n");
        scanf("%f", &PIB2); //armazena o valor Estado na variável PIB2

        printf("Digite o número de pontos turísticos da cidade da Carta 2: \n");
        scanf("%d", &NumeroDePontosTuristicos2); //armazena o valor Estado na variável NumeroDePontosTuristicos2

        printf("\n"); //Acrescenta uma linha para o início da apresentação dos dados    

    // Imprime na tela todos os dados agrupados por carta
        //CARTA 1
            printf("Carta 1:\n"); imprime na tela o código da carta
            printf("Estado: %s\n", Estado1); imp
            printf("Código: %s\n", CodigoDaCarta1);
            printf("Nome da Cidade: %s\n", NomeDaCidade1);
            printf("População: %d habitantes\n", Populacao1);
            printf("Área: %.2f Km²\n",  Area1); //imprime na tela o valor da área com duas casas decimais em Km²
            printf("PIB: %.2f bilhões de reais\n",  PIB1); //imprime na tela o valor do PIB com duas casas decimais
            printf("Número de Pontos Turísticos: %d\n",  NumeroDePontosTuristicos1);

        printf("\n"); //Acrescenta uma linha entre os conjuntos de dados das duas cartas

        //CARTA 2
            printf("Carta 2:\n");
            printf("Estado: %s\n", Estado2);
            printf("Código: %s\n", CodigoDaCarta2);
            printf("Nome da Cidade: %s\n", NomeDaCidade2);
            printf("População: %d habitantes\n", Populacao2);
            printf("Área: %.2f Km²\n",  Area2); //imprime na tela o valor da área com duas casas decimais em Km²
            printf("PIB: %.2f bilhões de reais\n",  PIB2); //imprime na tela o valor do PIB com duas casas decimais
            printf("Número de Pontos Turísticos: %d\n",  NumeroDePontosTuristicos2);


    return 0;
}
