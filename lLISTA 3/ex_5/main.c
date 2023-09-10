#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    double soma=0, indice,media,max=0;
    int dia;


    //utilizando a estrutura for para repetir o printf que pede o indice
    for(int i=1;i<=31;i++){
        printf("Digite o indice pluviometrico do dia %d de janeiro:",i);
        scanf("%lf",&indice);
        //utilizando o if para descobrir o indice maximo e o dia que aconteceu
        if(indice > max){
            max = indice;
            dia = i;
        }
        //utilizando a variavel soma para descobrir a media dos indices
        soma += indice;
        media = soma/ 31;
    }
    //imprimindo as variaveis
    printf("O indice maximo foi:%lf",max);
    printf("\nO maior indice  foi no dia:%d",dia);
    printf("\nO indice medio foi:%lf",media);
    return 0;
}
