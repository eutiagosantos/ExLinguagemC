#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    int n1,n2,n3,n4,n5;
    int maior,menor,amplitudeTotal;

    //Solicitando os numeros e armazenando eles nas variaveis
    printf("Digite o primeiro numero:");
    scanf("%d",&n1);
    printf("\nDigite o segundo numero:");
    scanf("%d",&n2);
    printf("\nDigite o terceiro numero:");
    scanf("%d",&n3);
    printf("\nDigite o quarto numero:");
    scanf("%d",&n4);
    printf("\nDigite o quinto numero:");
    scanf("%d",&n5);

    //Condiçao para encontrar o maior
    if(n1>n2 && n1>n3 && n1>n4 && n1>n5){
        maior = n1;
    }else if(n2>n1 && n2>n3 && n2>n4 && n2>n5){
        maior = n2;
    }else if(n3>n1 && n3>n2 && n3>n4 && n3>n5){
        maior = n3;
    }else if(n4>n1 && n4>n2 && n4>n3 && n4>n5){
        maior = n4;
    }else if(n5>n1 && n5>n2 && n5>n3 && n5>n4){
        maior = n5;
    }

    //Condiçao para encontrar o menor
    if(n1<n2 && n1<n3 && n1<n4 && n1<n5){
        menor = n1;
    }else if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
        menor = n2;
    }else if(n3<n1 && n3<n2 && n3<n4 && n3<n5){
        menor = n3;
    }else if (n4<n1 && n4<n2 && n4<n3 && n4<n5){
        menor = n4;
    }else if (n5<n1 && n5<n2 && n5<n3 && n5<n4){
        menor = n5;
    }

    printf("\no maior e:%d",maior);
    printf("\nO menor e:%d",menor);

    //Definindo a amplitude
    amplitudeTotal = maior - menor;


    //Mostrando resultado
    printf("\n\nA amplitude total e:%d",amplitudeTotal);
    return 0;
}
