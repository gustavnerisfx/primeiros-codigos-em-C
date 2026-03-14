#include <stdio.h>

int main(void) {

    int quant, soma = 0, numeros;
    int cont = 0;

    printf("Quantos numeros você quer somar?");
    scanf("%d", &quant);


    do {

        cont = cont + 1;

        printf("Digite o %dº numero...\n", cont);
        scanf("%d", &numeros);

        soma = soma + numeros;
        

    }while (cont < quant);

    printf("A soma de todos os numeros foi %d", numeros);

    return 0;

}