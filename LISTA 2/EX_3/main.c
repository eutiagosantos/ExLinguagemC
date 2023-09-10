#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    char estado[3];
    float valorProduto,valorFinal,imposto;

    //Solicitando o valor do produto e o estado e armazenado os valores nas variaveis
    printf("Digite o valor do produto:");
    scanf("%f",&valorProduto);
    printf("\nDigite o estado de destino:");
    scanf("%2s",&estado);


    //Fazendo a condiçao para o resultado de qual estado de destino
    switch(estado[0]){
    case 'M':
        if(estado[1] == 'G'){
        valorFinal = ((valorProduto * 7 )/ 100) + valorProduto;
        printf("Valor Final:%f",valorFinal);
        }else if(estado[1] == 'S'){
        valorFinal = ((valorProduto * 8) / 100) + valorProduto;
        printf("Valor Final:%f",valorFinal);
        }
        break;
    case 'S':
        if(estado[1] == 'P'){
        valorFinal = ((valorProduto * 12) / 100) + valorProduto;
        printf("Valor Final:%f",valorFinal);
        }
        break;
    case 'R':
        if(estado[1] == 'J'){
        valorFinal = ((valorProduto * 15) / 100) + valorProduto;
        printf("Valor Final:%f",valorFinal);
        }
        break;
    default:
        printf("Estado invalido");
    }


    return 0;
}
