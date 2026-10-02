#include <stdio.h>

int main() {
    int numero, i, opcao = 1;

    // Repete enquanto o usuario escolher 1
    while (opcao == 1) {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        // Mostra a tabuada
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja ver outra tabuada? (1-Sim / 0-Nao): ");
        scanf("%d", &opcao);
    }

    return 0;
}