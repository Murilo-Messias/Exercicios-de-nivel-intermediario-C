#include <stdio.h>

int main() {
    int n, i, numero;
    int maior, menor;
    float soma = 0, media;

    printf("Quantos numeros deseja digitar? ");
    scanf("%d", &n);

    printf("Digite um numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;
    soma = numero;

    // Repete para os outros numeros
    for (i = 2; i <= n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

        // Verifica o maior numero
        if (numero > maior) {
            maior = numero;
        }

        // Verifica o menor numero
        if (numero < menor) {
            menor = numero;
        }
    }

    // Calcula a media
    media = soma / n;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
}