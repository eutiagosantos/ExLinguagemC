#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    int x,y,z;
    int maior,menor,meio;

    //solicitando os numeros e armazenando-os nas variaveis
    printf("Digite o primeiro numero:");
    scanf("%d",&x);
    printf("Digite o segundo numero:");
    scanf("%d",&y);
    printf("Digite o terceiro numero:");
    scanf("%d",&z);

    //fazendo a condiçao para encontrar o maior numero
    if(x>y && x>z){
        maior = x;
    }else if(y>x && y>z){
        maior = y;
    }else if(z>x && z >y){
        maior = z;
    }

    //fazendo a condiçao para encontrar o menor numero
    if(x<y && x<z){
        menor = x;
    }else if(y<x && y<z){
        menor = y;
    }else if(z<x && z<y){
        menor = z;
    }

    //condicional para descobrir o numero do meio
    if(maior == x && menor == y){
        meio = z;
    }else if(maior == y && menor == z){
        meio = x;
    }else if(maior == z && menor == x){
        meio = y;
    }

    //Mostrando os resultados
    printf("\n\nO maior e:%d\n",maior);
    printf("O menor e:%d\n",menor);
    printf("O numero do meio e:%d",meio);
    return 0;
}
