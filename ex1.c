#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    int peso1 = 2, peso2 = 3, peso3 = 5;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Verifica se algum peso e zero
    if (peso1 == 0 || peso2 == 0 || peso3 == 0) {
        printf("Erro: peso nao pode ser 0.\n");
    } else {
        // Calcula a media ponderada
        media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

        printf("Media: %.2f\n", media);

        // Verifica a situacao do aluno
        if (media >= 6) {
            printf("Aprovado\n");
        } else if (media >= 4) {
            printf("Exame\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}