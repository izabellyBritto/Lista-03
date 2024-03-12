#include <stdio.h>

int main() {
    int valor, dentro_intervalo = 0, fora_intervalo = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do valor: ", i + 1);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentro_intervalo++;
        } else {
            fora_intervalo++;
        }
    }

    printf("Quantidade de valores no intervalo [10,20]: %d\n", dentro_intervalo);
    printf("Quantidade de valores fora do intervalo [10,20]: %d\n", fora_intervalo);

    return 0;
}
