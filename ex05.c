#include <stdio.h>

int main() {
    int idade, maior_idade = 0;
    int count_mulheres = 0;

    printf("Informe a idade (ou -1 para encerrar): ");
    scanf("%d", &idade);

    while (idade != -1) {
        if (idade > maior_idade) {
            maior_idade = idade;
        }

        char sexo, olhos, cabelo;
        
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        
        printf("Informe a cor dos olhos (V/A): ");
        scanf(" %c", &olhos);
        
        printf("Informe a cor do cabelo (L/P): ");
        scanf(" %c", &cabelo);

        if (sexo == 'F' && idade >= 18 && idade <= 35 && olhos == 'V' && cabelo == 'L') {
            count_mulheres++;
        }

        printf("Informe a idade (ou -1 para encerrar): ");
        scanf("%d", &idade);
    }

    printf("A maior idade dos habitantes é: %d\n", maior_idade);
    printf("A quantidade de mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros é: %d\n", count_mulheres);

    return 0;
}

