#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Verifica se pode formar um triangulo
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0 ||
        lado1 + lado2 <= lado3 ||
        lado1 + lado3 <= lado2 ||
        lado2 + lado3 <= lado1) {

        printf("Os valores nao formam um triangulo valido.\n");

    // Todos os lados sao iguais
    } else if (lado1 == lado2 && lado2 == lado3) {
        printf("Triangulo equilatero.\n");

    // Dois lados sao iguais
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Triangulo isosceles.\n");

    // Nenhum lado e igual
    } else {
        printf("Triangulo escaleno.\n");
    }

    return 0;
}