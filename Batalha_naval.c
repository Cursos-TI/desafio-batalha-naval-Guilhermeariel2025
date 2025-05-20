#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};

    tabuleiro[1][2] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[3][2] = 1;

    tabuleiro[4][0] = 1;
    tabuleiro[4][1] = 1;
    tabuleiro[4][2] = 1;

    printf("Coordenadas dos navios posicionados:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio em: [%d][%d]\n", i, j);
            }
        }
    }

    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
