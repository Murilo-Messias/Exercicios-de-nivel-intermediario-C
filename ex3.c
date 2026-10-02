#include <stdio.h>

int main() {
    int i;
    float nota1, nota2, media;
    int aprovados = 0;
    int exame = 0;
    int reprovados = 0;

    // Le as notas dos 10 alunos
    for (i = 1; i <= 10; i++) {
        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        // Calcula a media
        media = (nota1 + nota2) / 2;

        // Conta a situacao de cada aluno
        if (media >= 6) {
            aprovados++;
        } else if (media >= 4) {
            exame++;
        } else {
            reprovados++;
        }
    }

    printf("\nAprovados: %d\n", aprovados);
    printf("Exame: %d\n", exame);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}