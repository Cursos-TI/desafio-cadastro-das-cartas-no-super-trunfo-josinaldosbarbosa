// super trunfo iniciante

#include <stdio.h>
#include <windows.h>

int main(){

    char estado2[2];
    char estado1;
    char cod1[3], cod2[3], nome1[15], nome2[15];
    int pop1, pop2, numpontosturisticos1, numpontosturisticos2;
    float area1, area2, pib1, pib2;



    printf("Digite o nome do estado ( uma letra de A a H ): ");
    scanf("%c",&estado1);
    printf("Digite o codigo da carta (letra do estado + numero de 01 a 04): ");
    scanf("%s",&cod1);
    printf("Digite o nome da cidade: ");
    scanf("%s",&nome1);
    printf("Digite o numero de habitantes: ");
    scanf("%d",&pop1);
    printf("Digite a area em KM2: ");
    scanf("%f",&area1);
    printf("Digite o PIB: ");
    scanf("%f",&pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&numpontosturisticos1);


    printf("\n\nCARTA 02 \n");
    printf("Digite o nome do estado ( uma letra de A a H ): ");
    scanf("%s", &estado2);
    printf("Digite o codigo da carta (letra do estado + numero de 01 a 04): ");
    scanf("%s", &cod2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);
    printf("Digite o numero de habitantes: ");
    scanf("%d", &pop2);
    printf("Digite a area em KM2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numpontosturisticos2);

    system("cls");

    printf(" CARTA 01 \n - ESTADO: %c \n - CODIGO: %s \n - NOME DA CIDADE: %s \n - POPULACAO: %d \n - AREA: %.2f KM2 \n - PIB R$ %.2f bilhoes de Reais \n - NUMEROS DE PONTOS TURISTICOS: %d\n\n",estado1,cod1,nome1,pop1,area1,pib1,numpontosturisticos1);

    printf("\n\nCARTA 02 \n - ESTADO: %s \n - CODIGO: %s \n - NOME DA CIDADE: %s \n - POPULACAO: %d \n - AREA: %.2f KM2 \n - PIB R$ %.2f bilhoes de Reais \n - NUMEROS DE PONTOS TURISTICOS: %d\n\n",estado2,cod2,nome2,pop2,area2,pib2,numpontosturisticos2);

    return 0;

}
