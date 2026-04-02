#include <stdio.h>

int main(){

    printf("=================================\n");
    printf("       N O T A   L E G A L       \n");
    printf("=================================\n");
    printf("Produto     Qtd     Valor  Unit\n");
    printf("%-11s %03i %15.2f\n", "Camiseta", 2, 39.99);
    printf("%-11s %03i %15.2f\n", "Calca", 1, 89.90);
    printf("%-11s %03i %15.2f\n", "Meia Social", 3, 19.99);

    return 0;
}