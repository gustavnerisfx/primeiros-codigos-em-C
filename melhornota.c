#include <stdio.h>
#include <string.h>

int main(void) {

    int N, R = 0;
    float nota, notaA = 0.0;
    char aluno[100], alunoA[100];

    printf("Quantos alunos há na sala? \n");
    scanf("%d", &N);
    getchar();

    do {

        printf("Digite o nome do aluno\n");
        scanf("%s", &aluno);

        printf("Digite a nota\n");
        scanf("%f", &nota);

        if(nota > notaA) {

            notaA = nota;
            strcpy(alunoA, aluno);

        }

        R = R + 1;

        getchar();

    } while (R < N);
    

    printf("O aluno com o maior aproveitamento foi %s ", alunoA);
    printf("\n com a nota %.2f", notaA);

    return 0;
    
}