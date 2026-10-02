#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Quantos termos deseja ver? ");
    scanf("%d", &n);

    // Mostra os termos da sequencia
    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        // Calcula o proximo numero
        proximo = a + b;
        a = b;
        b = proximo;
    }

    return 0;
}