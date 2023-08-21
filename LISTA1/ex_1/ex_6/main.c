#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1,x2,y1,y2,distanciaEuclidiana;

    printf("Digite o ponto x1:");
    scanf("%d",&x1);
    printf("\nDigite o ponto x2:");
    scanf("%d",&x2);
    printf("\nDigite o ponto y1:");
    scanf("%d",&y1);
    printf("\nDigite o ponto y2:");
    scanf("%d",&y2);

    distanciaEuclidiana = sqrt(pow(x2-x1,2) + pow(y2 - y1,2));

    printf("A distancia euclidiana eh:%d",distanciaEuclidiana);

    return 0;
}
