#include <stdio.h>

int main() {
    int numero, soma = 0, count = 0;

    printf("Digite um número (ou 0 para encerrar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero % 2 == 0) {
            soma += numero;
            count++;
        }
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);
    }

    if (count > 0) {
        float media = (float)soma / count;
        printf("A média dos números pares digitados é: %.2f\n", media);
    } else {
        printf("Nenhum número par digitado.\n");
    }

    return 0;
}
