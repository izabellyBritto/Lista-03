#include <stdio.h>

int main() {
    int total_pessoas = 15;
    int idade, maior_idade = 0, menor_idade = 150, mulheres_salario_ate_100 = 0;
    char sexo;
    float salario, soma_salario = 0, media_salario;

    for (int i = 1; i <= total_pessoas; i++) {
        printf("Informe a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        if (idade > maior_idade) {
            maior_idade = idade;
        }

        if (idade < menor_idade) {
            menor_idade = idade;
        }

        printf("Informe o sexo da pessoa %d (M/F): ", i);
        scanf(" %c", &sexo);

        printf("Informe o salário da pessoa %d: ", i);
        scanf("%f", &salario);

        soma_salario += salario;

        if (sexo == 'F' && salario <= 100) {
            mulheres_salario_ate_100++;
        }
    }

    media_salario = soma_salario / total_pessoas;

    printf("a) A média de salário do grupo é: %.2f\n", media_salario);
    printf("b) A maior idade do grupo é: %d\n", maior_idade);
    printf("   A menor idade do grupo é: %d\n", menor_idade);
    printf("c) A quantidade de mulheres com salário até R$100,00 é: %d\n", mulheres_salario_ate_100);

    return 0;
}
