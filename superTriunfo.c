#include <stdio.h>
#define Ansi_blue "\x1b[34m"
#define Ansi_green "\x1b[32m"
#define Ansi_red "\x1b[31m"
#define Ansi_reset "\x1b[0m"


int main(){
    char carta1_estado, carta2_estado,
    carta1_codigo[10], carta2_codigo[10],
    carta1_cidade[50], carta2_cidade[50];

    unsigned long int carta1_populacao, carta2_populacao;

    int carta1_pontos_turisticos, carta2_pontos_turisticos;

    float carta1_area, carta2_area,
    carta1_PIB, carta2_PIB,
    carta1_densidade_populacional, carta2_densidade_populacional,
    carta1_PIB_per_capta, carta2_PIB_per_capta,
    carta1_super_poder, carta2_super_poder;

    printf(Ansi_blue);
    printf("Cadastro Carta 1 ------------------------------------------\n");
    printf(Ansi_reset);

    printf("Digite a letra inicial do estado: ");
    scanf(" %c", &carta1_estado);

    printf("Digite o código da carta (inicial do estado + numero[01 á 09]): ");
    scanf(" %s", carta1_codigo);

    printf("Digite o nome da cidade [apenas uma palavra ou separadas por -]: ");
    scanf("%s", carta1_cidade);

    printf("Digite o número populacional: ");
    scanf("%lu", &carta1_populacao);

    printf("Digite a Área (em Km separados com .): ");
    scanf("%f", &carta1_area);
    
    printf("Digite o PIB (em milhões, centavos separados por .): ");
    scanf("%f", &carta1_PIB);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta1_pontos_turisticos);

    carta1_densidade_populacional = (float) carta1_populacao / carta1_area;
    carta1_PIB_per_capta = carta1_PIB*1000000 / (float) carta1_populacao;

    carta1_super_poder = (float) carta1_populacao 
                       + (float) carta1_pontos_turisticos 
                       + carta1_area 
                       + carta1_PIB 
                       + carta1_PIB_per_capta 
                       + (1.0f / carta1_densidade_populacional);

    printf(Ansi_blue);
    printf("===========================================================\n");
    printf(Ansi_reset);
    printf("\n");

    printf(Ansi_green);
    printf("CARTA 1\n");
    printf(Ansi_reset);
    printf("Inicial do Estado: %c\n", carta1_estado);
    printf("Código: %s\n", carta1_codigo);
    printf("Nome da Cidade: %s\n", carta1_cidade);
    printf("Número Populacional: %lu\n", carta1_populacao);
    printf("Área (em Km): %.2f\n", carta1_area);
    printf("PIB: (em milhões): %.2f\n", carta1_PIB);
    printf("Número de Pontos Turistícos:  %d\n",carta1_pontos_turisticos);
    printf("Densidade Populacional: %.3f\n", carta1_densidade_populacional);
    printf("PIB per Capta: %.2f\n", carta1_PIB_per_capta);
    printf("SUPER PODER!!!: %f\n", carta1_super_poder);

    printf(Ansi_blue);
    printf("===========================================================\n");
    printf(Ansi_reset);
    printf("\n");
    
    printf(Ansi_blue);
    printf("Cadastro Carta 2 ------------------------------------------\n");
    printf(Ansi_reset);

    printf("Digite a letra inicial do estado: ");
    scanf(" %c", &carta2_estado);

    printf("Digite o código da carta (inicial do estado + numero[01 á 09]): ");
    scanf(" %s", carta2_codigo);

    printf("Digite o nome da cidade [apenas uma palavra ou separadas por -]: ");
    scanf("%s", carta2_cidade);

    printf("Digite o número populacional: ");
    scanf("%lu", &carta2_populacao);

    printf("Digite a Área (em Km separados com .): ");
    scanf("%f", &carta2_area);
    
    printf("Digite o PIB (em milhões, centavos separados por .): ");
    scanf("%f", &carta2_PIB);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &carta2_pontos_turisticos);

    carta2_densidade_populacional = (float) carta2_populacao / carta2_area;
    carta2_PIB_per_capta = carta2_PIB* 1000000 / (float) carta2_populacao;
    carta2_super_poder = (float) carta2_populacao 
                       + (float) carta2_pontos_turisticos 
                       + carta2_area 
                       + carta2_PIB 
                       + carta2_PIB_per_capta 
                       + (1.0f / carta2_densidade_populacional);

    printf(Ansi_blue);
    printf("===========================================================\n");
    printf(Ansi_reset);
    printf("\n");

    printf(Ansi_green);
    printf("CARTA 2\n");
    printf(Ansi_reset);
    printf("Inicial do Estado: %c\n", carta2_estado);
    printf("Código: %s\n", carta2_codigo);
    printf("Nome da Cidade: %s\n", carta2_cidade);
    printf("Número Populacional: %lu\n", carta2_populacao);
    printf("Área (em Km): %.2f\n", carta2_area);
    printf("PIB: (em milhões): %.2f\n", carta2_PIB);
    printf("Número de Pontos Turistícos:  %d\n",carta2_pontos_turisticos);
    printf("Densidade Populacional: %.3f\n", carta2_densidade_populacional);
    printf("PIB per Capta: %.2f\n", carta2_PIB_per_capta);
    printf("SUPER PODER!!!: %f\n", carta2_super_poder);

    printf(Ansi_blue);
    printf("===========================================================\n");
    printf(Ansi_reset);
    printf("\n");
    
    printf(Ansi_blue);
    printf("===========================================================\n");
    printf("                          RESULTADO                        \n");
    printf("-----------------------------------------------------------\n");
    printf(Ansi_reset);

    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", carta1_populacao > carta2_populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1_area > carta2_area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1_PIB > carta2_PIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1_pontos_turisticos > carta2_pontos_turisticos);
    printf("Densidade Populacional: (%d)\n",carta1_densidade_populacional < carta2_densidade_populacional );
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1_PIB_per_capta > carta2_PIB_per_capta);
    printf("Super Poder: Carta 1 venceu (%d)\n",carta1_super_poder > carta2_super_poder);
    printf(Ansi_blue);
    printf("===========================================================\n");
    printf(Ansi_reset);

    printf("\n");
    printf(Ansi_red);
    printf("FIM DA EXECUÇÃO.");
    printf(Ansi_reset);

    return 0;
}   