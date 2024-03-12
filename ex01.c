#include <stdio.h>

int main() {
    int codigo_aluno, count = 0;
    float nota1, nota2, nota3, media, soma_notas = 0.0;

    printf("Digite o código do aluno (ou 0 para encerrar): ");
    scanf("%d", &codigo_aluno);

    while (codigo_aluno != 0) {
        printf("Digite as três notas do aluno (separadas por espaços): ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        soma_notas += nota1 + nota2 + nota3;
        count++;

        printf("Digite o código do próximo aluno (ou 0 para encerrar): ");
        scanf("%d", &codigo_aluno);
    }

    if (count > 0) {
        media = soma_notas / (count * 3);
        printf("A média aritmética das notas dos alunos é: %.2f\n", media);
    } else {
        printf("Nenhum aluno inserido.\n");
    }

    return 0;
}
