#include <stdio.h>

int main () {
    int numero;
    unsigned long long fatorial = 1;

    do{
        printf("Digite um numero inteiro positivo:  ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Opcao invalida! O numero deve ser positivo ou Zero.\n");

        }

    } while (numero < 0);

    for (int i = 1; i <= numero; i++){
        fatorial *= i;
    }

    printf("O fatorial de %d eh: %llu\n", numero, fatorial);

    return 0;
}