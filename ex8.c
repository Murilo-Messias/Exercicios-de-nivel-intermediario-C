#include <stdio.h>

int main() {
    int opcao = 0;
    float numero1, numero2, resultado;

    // Repete o menu ate escolher sair
    while (opcao != 5) {
        printf("\n1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%f", &numero2);
        }

        // Faz a operacao escolhida
        if (opcao == 1) {
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);

        } else if (opcao == 2) {
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);

        } else if (opcao == 3) {
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);

        } else if (opcao == 4) {

            // Verifica divisao por zero
            if (numero2 == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            }

        } else if (opcao == 5) {
            printf("Programa encerrado.\n");

        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}