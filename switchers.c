#include <stdio.h>

int main(void) {

    int mengogols, coringols, dif, categoria, grandeochororo;

    printf("Quantos gols o Flamengo fez?");
    scanf("%d", &mengogols);
    printf("Quantos gols o Corinthians fez?");
    scanf("%d", &coringols);

    dif = mengogols - coringols;

    if (dif >= 3) {
        categoria == 0;
    }
    else if(dif <= 3) {
        categoria == 1;
    }
    else if(dif == 0) {
        categoria == 2;
    }


    switch (categoria) {
        case 0:
            printf("GOLEADA! \n A diferenca de gols foi de %d ", dif, "\n");
            break;
        case 1:
            printf("JOGO NORMAL \n A diferenca de gols foi de %d ", dif, "\n");
            break;
        case 2:
            printf("EMPATE! \n A diferenca de gols foi de %d ", dif, "\n");
            break;
    }
    
    if (mengogols > coringols) {

        printf("\nVai ser grande o Chororo \n O meu Mengao e o melhor do Brasil!\n");

    }
    else if (mengogols < coringols) {

        printf("\nSALVE O CORINTHIANS, O CAMPEAO DOS CAMPEOES!!!\n");
    }
    
    return 0;

}