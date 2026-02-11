#include <stdio.h>

int main(){
    char estado1, estado2,
    codigo1[10], codigo2[4],
    nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2,
    pontos_turisticos1, pontos_turisticos2;
    float area1, area2,
    PIB1, PIB2;

    printf("Cadastro Carta 1-------------------------------------------\n");

    printf("Digite a letra inicial do estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (inicial do estado + numero[01 á 09]): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade [apenas uma palavra ou separadas por -]: ");
    scanf("%s", nome_cidade1);

    printf("Digite o número populacional: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em Km separados com .): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (separação de centavos com .): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("==========================================================\n");
    printf("\n");

    printf("CARTA 1\n");
    printf("Inicial do Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Número Populacional: %d\n", populacao1);
    printf("Área (em Km): %.2f\n", area1);
    printf("PIB: (em milhões): %.2f\n", PIB1);
    printf("Número de Pontos Turistícos:  %d\n",pontos_turisticos1);

    printf("===========================================================\n");
    printf("\n");
    
    printf("Cadastro Carta 2-------------------------------------------\n");

    printf("Digite a letra inicial do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (inicial do estado + numero[01 á 09]): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade [apenas uma palavra ou separadas por -]: ");
    scanf("%s", nome_cidade2);

    printf("Digite o número populacional: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em Km separados com .): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (separação de centavos com .): ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("===========================================================\n");
    printf("\n");

    printf("CARTA 2\n");
    printf("Inicial do Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Número Populacional: %d\n", populacao2);
    printf("Área (em Km): %.2f\n", area2);
    printf("PIB: (em milhões): %.2f\n", PIB2);
    printf("Número de Pontos Turistícos:  %d\n",pontos_turisticos2);
    
    printf("===========================================================\n");
    printf("FIM DA EXECUÇÃO");


    return 0;
}