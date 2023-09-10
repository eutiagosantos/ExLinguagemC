#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    int opcao, numMeses;
    float salario, novoSalario, valorFerias, decimoTerceiro;

    do {
        printf("\nMENU DE OPCOES\n");
        printf("1-Novo Salario\n");
        printf("2-Ferias\n");
        printf("3-Decimo Terceiro\n");
        printf("4-Sair\n");
        scanf("%d", &opcao);


    do{
        printf("Digite o seu salario:");
        scanf("%f", &salario);
    }while(salario<0);


        switch (opcao) {
        case 1:
            // Calcula o novo salário com base em faixas de aumento
            if (salario <= 999.99) {
                novoSalario = ((salario * 15) / 100) + salario;
            } else if (salario >= 1000 && salario <= 2000) {
                novoSalario = ((salario * 10) / 100) + salario;
            } else if (salario > 2000) {
                novoSalario = ((salario * 5) / 100) + salario;
            }

            printf("O seu novo salario e:%4.f", novoSalario);
            break;
        case 2:
            // Calcula o valor das férias
            valorFerias = (salario / 3) + salario;

            printf("O valor das suas ferias e:%4.f", valorFerias);
            break;
        case 3:
            // Solicita o número de meses que o funcionário está na empresa
            do {
                printf("\nDigite o numero de meses que voce esta na empresa:");
                scanf("%d", &numMeses);

                if (numMeses > 12) {
                    printf("Numero de meses invalido. Digite novamente");
                }
            } while (numMeses > 12);

            // Calcula o décimo terceiro salário
            decimoTerceiro = (salario * numMeses) / 12;

            printf("O seu decimo terceiro sera:%4.f", decimoTerceiro);
            break;
        }
    } while (opcao != 4);

    return 0;
}
