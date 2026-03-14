#include <stdio.h>
#include <string.h>

int main(void) {

    int i = 0, N, a = 0;
    char nome [100], nomeA [100];
    float nota, notaA;

    printf("Quantos alunos tem na sala?\n");
    scanf("%i", &N);

    while (i < N) {

        printf("fale o nome do %d aluno\n", a = a + 1);
        scanf("%s", &nome);

        printf("agora fale a nota do %i aluno\n", a);
        scanf("%f", &nota);

        if(nota > notaA) {

            notaA = nota;
            strcpy(nome, nomeA);

        }

        i++;

    }

    printf("O aluno com o maior aproveitamento foi %s ", nomeA);
    printf("\n com a nota %.2f", notaA);

    return 0;

}