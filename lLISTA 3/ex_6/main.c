#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis a(primeiro), b(segundo) e f é o proximo numero
    int n,a=0,b=1,f;

    //utilizando a estrutura do-while para repetir quando o usuario digitar um numero menor ou igual a zero
    do{
        printf("Digite um numero:");
        scanf("%d",&n);

        if(n<=0){
            printf("Numero Invalido");
        }

    }while(n<=0);


   //utilizando o if para mostrar os primeiros 2 numeros
   if(n>=1){
    printf("%d\n",a);
   }
   if(n>=2){
    printf("%d\n",b);
   }


    //utilizando o for para mostrar os numeros de 3 adiante
   for(int i=3;i<=n;i++){
        f = a+b;
        printf("%d\n",f);
        a=b;
        b=f;
   }

    return 0;
}
