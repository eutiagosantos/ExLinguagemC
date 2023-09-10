#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis n em relaçao aos numeros e pares um contador que se inicia com o valor 0 para contar os valores pares digitados
    int n,pares=0;

    //utilizando a estrutura do-while para ler valores ate o numero digitado ser 0
    do{
        printf("Digite um numero:");
        scanf("%d",&n);

        //utilizando if-else para contar a quantidade de numeros pares
        if(n % 2 == 0 && n != 0){
            pares++;
        }

    }while(n!=0);

    //imprimindo a quantidade de numeros pares

    printf("A quantidade de numeros pares e:%d",pares);
    return 0;
}
