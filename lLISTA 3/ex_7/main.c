#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando as variaveis
    int x,y;


//utilizando a estrutura do-while para repetir ate quando o usuario digitar o valor 0 para as duas coordenadas
    do{
        printf("Digite as coordenadas x e y:");
        scanf("%d %d",&x,&y);

//utilizando if else para identificar em qual quadrante o ponto esta
        if(x>0 && y>0){
            printf("Primeiro quadrante\n");
        }else if(x<0 && y>0){
            printf("Segundo quadrante\n");
        }else if(x<0 && y<0){
            printf("Terceiro quadrante\n");
        }else if(x>0 && y<0){
            printf("Quarto qaudrante\n");
        }
    }while(x !=0 && y != 0);

    return 0;
}
