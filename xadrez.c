#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_NAVIO 3

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Criação dos navios (representados por vetores)
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linha_horizontal = 2;  // Linha fixa
    int coluna_inicial_horizontal = 4; // Coluna inicial

    int coluna_vertical = 7;  // Coluna fixa
    int linha_inicial_vertical = 1; // Linha inicial

    // Posiciona navio horizontal (na linha 2)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_inicial_horizontal + i] = navio_horizontal[i];
    }

    // Posiciona navio vertical (na coluna 7)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_inicial_vertical + i][coluna_vertical] = navio_vertical[i];
    }

    // Exibe o tabuleiro
    printf("=== TABULEIRO DE BATALHA NAVAL ===\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
