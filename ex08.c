#include <stdio.h>

int main() {
    int count = 0;
    float soma = 0;

    for (int i = 13; i <= 73; i++) {
        soma += i;
        count++;
    }

    float media = soma / count;

    printf("A média aritmética dos números entre 13 e 73 é: %.2f\n", media);

    return 0;
}
