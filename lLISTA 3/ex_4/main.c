#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando variaveis
    double S=1,n;
    double soma;

    //utilizando a estrutura do-while para repetir o printf enquanto o n for menor igual a 0
    do{
        printf("Digite um numero:");
        scanf("%lf",&n);

    //utilizado if para se o n for igual a zero aparecera uma mensagem na tela
        if(n==0){
            printf("Valor Invalido");
        }
    }while(n<=0);

    //utilizando for para repetir o denominador ate o n
    for(int i=1;i<=n;i++){
        printf("%lf\n",S/i);
        soma = soma + (S/i);
    }
    //imprimindo a soma
    printf("Soma:%lf",soma);
    return 0;
}
