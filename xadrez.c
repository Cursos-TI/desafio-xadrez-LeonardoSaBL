#include <stdio.h>

int main(){

    int t = 0,b = 0,r = 0;

    printf("A movimentação da peça Torre \n");

    do {

        printf("  Direita\n");


        t++;


     } while (t < 5);

    printf(" A  movimentação da peça Bispo é: \n");

    while(b < 5) {

        printf("Cima, Direita\n");

        b++;




    }

    printf("A movimentação da Rainha é: \n");

    for (r = 0; r < 8; r++) {

        printf("Esquerda\n");

    }

    


    return 0;

}
