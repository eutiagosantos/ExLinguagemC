#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    // Solicita os valores de a, b e c ao usuário
    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    // Calcula o discriminante (delta)
    delta = b*b - 4*a*c;

    // Verifica se há raízes reais
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raizes sao x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("A raiz dupla eh x = %.2lf\n", x1);
    } else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-delta) / (2*a);
        printf("As raizes sao complexas: ");
        printf("x1 = %.2lf + %.2lfi e x2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
