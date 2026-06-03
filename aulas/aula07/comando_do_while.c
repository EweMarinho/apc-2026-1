#include <stdio.h>

int main () {
    int numero = 0;

    do {
        printf("Entre com um numero de 1 a 10 \n");
        scanf("%i", &numero);
        while(getchar() != '\n');
    } while (numero < 1|| numero > 10);

    



    return 0;

}