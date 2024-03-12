#include <stdio.h>

int main() {
    float salario, total_salario = 0, maior_salario = 0;
    int num_filhos, total_filhos = 0, total_pessoas = 0, count_salario_ate_100 = 0;

    printf("Digite o salário do habitante (ou um número negativo para encerrar): ");
    scanf("%f", &salario);

    while (salario >= 0) {
        total_pessoas++;

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario <= 100) {
            count_salario_ate_100++;
        }

        printf("Digite o número de filhos do habitante: ");
        scanf("%d", &num_filhos);

        total_salario += salario;
        total_filhos += num_filhos;

        printf("Digite o salário do próximo habitante (ou um número negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if (total_pessoas > 0) {
        float media_salario = total_salario / total_pessoas;
        float media_filhos = (float)total_filhos / total_pessoas;
        float percentual_salario_ate_100 = (float)count_salario_ate_100 / total_pessoas * 100;

        printf("a) Média do salário da população: %.2f\n", media_salario);
        printf("b) Média do número de filhos: %.2f\n", media_filhos);
        printf("c) Maior salário: %.2f\n", maior_salario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentual_salario_ate_100);
    } else {
        printf("Nenhum habitante inserido.\n");
    }

    return 0;
}
