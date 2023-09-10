#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    double tempo,velocidade;
    char planeta;

    //solicitando o tempo de queda e onde ocorreu
     printf("\nDigite onde ocorreu:");
    scanf("%c",&planeta);
    printf("Digite o tempo de queda:");
    scanf("%lf",&tempo);
    //condicional que encerra o programa caso o valor de tempo seja menor ou igual a 0
    if(tempo <= 0){
        printf("Valor Invalido");
        return 1;
    }



    //condição para calcular a velocidade de cada planeta
    if(planeta == 'T' || planeta == 't'){
        velocidade = 9.807 * tempo;
    }else if(planeta == 'L' || planeta == 'l'){
        velocidade = 1.62 * tempo;
    }else if(planeta == 'M' || planeta == 'm'){
        velocidade = 3.7 * tempo;
    }

    printf("\nA velocidade e: %2.lf", velocidade);
    return 0;
}
