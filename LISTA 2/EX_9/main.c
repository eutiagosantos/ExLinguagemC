#include <stdio.h>
#include <math.h>

int main() {
    //declarando as variaveis
    int w,x,y,z;

    //solicitando o valor das variaveis e armazenado-o
    printf("Digite o valor de x:");
    scanf("%d",&x);
    printf("\nDigite o valor de y:");
    scanf("%d",&y);
    printf("\nDigite o valor de z:");
    scanf("%d",&z);
    printf("\nDigite o valor de W:");
    scanf("%d",&w);

    //
    if(w == 1){
        printf("Media Geometrica:%d",x*y*z);
    }else if(w == 2){
        printf("Media Ponderada:%d",(x + 2*y + 3*z)/6);
    }else if(w == 3){
        printf("Media Harmonica:%d",1/(1/x + 1/y + 1/z));
    }else if(w == 4){
        printf("Media Aritimetica:%d",(x+y+z)/3);
    }

    return 0;
}

