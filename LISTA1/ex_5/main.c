#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorInvest,taxaMensal,valorTotal,valorJuros;
    int meses;

    printf("Digite o valor que vai ser investido:");
    scanf("%f",&valorInvest);
    printf("\nDigite o numero de meses que ira durar a aplicacao:");
    scanf("%d",&meses);
    printf("\nQual sera a taxa de juros:");
    scanf("%f",&taxaMensal);

    valorTotal = valorInvest * pow(1 + taxaMensal,meses);
    valorJuros = valorTotal - valorInvest;

    printf("O valor total eh:%.2f",valorTotal);
    printf("\nO valor total de juros eh:%.2f",valorJuros);
    return 0;
}
