#include <stdio.h>

int main() {
    char palavra[50];
    int i;
    int vogais = 0;
    int consoantes = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    // Percorre a palavra
    for (i = 0; palavra[i] != '\0'; i++) {

        // Verifica se e uma vogal
        if (palavra[i] == 'a' || palavra[i] == 'e' ||
            palavra[i] == 'i' || palavra[i] == 'o' ||
            palavra[i] == 'u') {

            vogais++;
        } else {
            consoantes++;
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}