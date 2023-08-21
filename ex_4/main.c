#include <stdio.h>
#include <stdlib.h>

int main()
{
  int eleitores,branco,nulo,valido;

  printf("Digite o numero de eleitores:");
  scanf("%f",&eleitores);
  printf("\nDigite o numero de votos brancos:");
  scanf("%f",&branco);
  printf("\nDigite o numero de votos nulos:");
  scanf("%f",&nulo);
  printf("\nDigite o numero de votos validos:");
  scanf("%f",&valido);

  float percentualBranco = (float)branco / eleitores * 100;
  float percentualNulo = (float)nulo / eleitores * 100;
  float percentualValido = (float)valido / eleitores * 100;

  printf("O percentual de votos brancos eh:%.4f",percentualBranco);
  printf("\nO percentual de votos nulos eh:%.4f",percentualNulo);
  printf("\nO percentual de votos validos eh:%.4f",percentualValido);

    return 0;
}
