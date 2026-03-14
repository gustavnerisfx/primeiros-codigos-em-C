#include <stdio.h>

int main() {
    
    int resposta;

    printf("Saiba se tu consegues ir para o exterior :)) !!");

    printf("Quanto dinheiro tu tem?");
    scanf("%d", resposta);

    if(resposta < 10000) {
        printf("Não vai pro exterior haha");
    }
    else {
        printf("Opa! bora pra Rússia?");
    }

    return 0;

}