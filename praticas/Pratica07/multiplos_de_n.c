#include <stdio.h>

int main() {

    int numero;

    do{
        printf("Digite um numero inteiro entre 1 e 100 :  ");
        scanf("%d", &numero);

        if (numero <= 0 || numero > 100) {
            printf("Numero invalido! Por favor, escolha um numero de 1 a 100.\n");

        }

    } while (numero <= 0 || numero > 100);
        printf("\nMultiplos de %d no intervalo de 1 a 100:\n", numero);

    for (int i = 1; i <= 100; i++){
        if (i % numero == 0){
            printf("%d \n", i);
        }
        
    }
   


    return 0;
}

