#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int habilidadeCone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    int habilidadeOctaedro[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };
    int habilidadeCruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    int i, j;

    tabuleiro[2][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;

    tabuleiro[5][5] = 3;
    tabuleiro[6][5] = 3;
    tabuleiro[7][5] = 3;

    tabuleiro[1][7] = 3;
    tabuleiro[2][8] = 3;
    tabuleiro[3][9] = 3;

    tabuleiro[7][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[9][3] = 3;

    printf("--- Tabuleiro Batalha Naval ---\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nExemplo de saída de habilidade em cone:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidadeCone[i][j]);
        }
        printf("\n");
    }

    printf("\nExemplo de saída de habilidade em octaedro:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidadeOctaedro[i][j]);
        }
        printf("\n");
    }

    printf("\nExemplo de saída de habilidade em cruz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidadeCruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
