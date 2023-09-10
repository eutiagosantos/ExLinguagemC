#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    double x,y;
    int opcao;

    //Menu de Escolha
    printf("MENU\n");
    printf("1-SOMA\n");
    printf("2-SUBTRACAO\n");
    printf("3-MULTIPLICACAO\n");
    printf("4-DIVISAO\n\n");
    scanf("%d",&opcao);

    //Condicional para mostrar o resultado da operação escolhida
    switch(opcao){
    case 1:
        printf("Digite o primeiro numero:");
        scanf("%lf",&x);
        printf("Digite o segundo numero:");
        scanf("%lf",&y);

        printf("%2.lf + %2.lf = %2.lf",x,y,x+y);
        break;
    case 2:
        printf("Digite o primeiro numero:");
        scanf("%lf",&x);
        printf("Digite o segundo numero:");
        scanf("%lf",&y);

        printf("%2.lf - %2.lf = %2.lf",x,y,x-y);
        break;
    case 3:
        printf("Digite o primeiro numero:");
        scanf("%lf",&x);
        printf("Digite o segundo numero:");
        scanf("%lf",&y);

        printf("%2.lf x %2.lf = %2.lf",x,y,x*y);
        break;
    case 4:
        printf("Digite o primeiro numero:");
        scanf("%lf",&x);
        printf("Digite o segundo numero:");
        scanf("%lf",&y);

        printf("%2.lf / %2.lf = %2.lf",x,y,x/y);
        break;
    default:
        printf("Opcao invalida");
    }
    return 0;
}
