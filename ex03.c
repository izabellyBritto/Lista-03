#include <stdio.h>

int main() {
    int numero, intervalo_0_25 = 0, intervalo_26_50 = 0, intervalo_51_75 = 0, intervalo_76_100 = 0;

    do {
        printf("Digite um número (ou um número negativo para encerrar): ");
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 25) {
            intervalo_0_25++;
        } else if (numero >= 26 && numero <= 50) {
            intervalo_26_50++;
        } else if (numero >= 51 && numero <= 75) {
            intervalo_51_75++;
        } else if (numero >= 76 && numero <= 100) {
            intervalo_76_100++;
        }
    } while (numero >= 0);

    printf("Quantidade de números no intervalo [0,25]: %d\n", intervalo_0_25);
    printf("Quantidade de números no intervalo [26,50]: %d\n", intervalo_26_50);
    printf("Quantidade de números no intervalo [51,75]: %d\n", intervalo_51_75);
    printf("Quantidade de números no intervalo [76,100]: %d\n", intervalo_76_100);

    return 0;
}
