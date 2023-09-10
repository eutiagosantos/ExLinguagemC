#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando a variavel impares que inicia com o valor 3
    int impares = 3;

    //utilizando a estrutura while para a repetição criando uma condiçao para imprimir os numeros enquanto impares for menor/igual a 999
    while(impares <= 999){
        printf("%d\n",impares);
        impares+=2;
    }

    return 0;
}
