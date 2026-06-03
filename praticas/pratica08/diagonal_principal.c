#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Impressão da diagonal principal
    printf("\nDiagonal principal da matriz:\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}