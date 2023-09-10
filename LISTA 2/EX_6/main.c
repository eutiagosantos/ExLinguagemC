#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    int A,B,C;

    //solicitando que o usuario digite os valores e armazenando-os nas devidas variaveis
    printf("Digite o valor de A:");
    scanf("%d",&A);
    printf("\nDigite o valor de B:");
    scanf("%d",&B);

    //Encerrando o programa se qualquel valor for menor que 0
    if(A<0 || B<0){
        printf("Valor Invalido");
        return 1;
    }

    printf("\nDigite o valor de C:");
    scanf("%d",&C);



    //Verificando se C e ou nao divisivel
    if(C % A == 0 && C % B == 0){
        printf("Divisivel por ambos");
    }else if(C % A == 0 || C % B == 0){
        printf("Divisivel por um");
    }else{
        printf("Nao e divisivel por nenhum");
    }


    return 0;
}
