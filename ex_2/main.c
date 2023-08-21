#include <stdio.h>
#include <stdlib.h>

int main()
{
   float n1,n2,n3,menorValor = 0,maiorValor = 0,soma,media,produto;

   printf("Digite a primeira nota:");
   scanf("%f",&n1);
   printf("Digite a segunda nota:");
   scanf("%f",&n2);
   printf("Digite a terceira nota:");
   scanf("%f",&n3);

   soma = n1+n2+n3;
   media = soma / 3;
   produto = n1*n2*n3;


   //menor valor
   if(n1<n2 && n1<n3){
    menorValor = n1;
   }else if(n2<n1 && n2<n3){
    menorValor = n2;
   }else if(n3<n1 && n3<n2){
    menorValor = n3;
   }else{
    printf("as notas sao iguais");
   }


   //maior valor
   if(n1>n2 && n1>n3){
    maiorValor = n1;
   }else if (n2>n1 && n2>n3){
    maiorValor = n2;
   }else if(n3>n1 && n3>n1){
    maiorValor = n3;
   }else{
    printf("as notas sao iguais");
   }

   //imprimindo valores
   printf("A soma eh:%4.f",soma);
   printf("\nA media eh:%4.f",media);
   printf("\nO produto das notas eh:%4.f",produto);
   printf("\nO maior valor eh:%4.f",maiorValor);
   printf("\nO menor valor eh:%4.f",menorValor);

    return 0;
}
