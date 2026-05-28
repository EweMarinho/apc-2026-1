#include <stdio.h>

int main(){                //  0 1 2 3 4 5 6 7 8 9
    int numeros[10];       // | | | | | | | | | | | 
    numeros [0] = 5;       // |5| | | | | | | | | | 
    numeros [1] = 2;       // |5|2| | | | | | | | | 
    numeros [9] = 1;       // |5|2| | | | | | | |1|  
    numeros [2] = 3;       // |5|2|3| | | | | | |1| 
    numeros [3] = 7;       // |5|2|3|7| | | | | |1|
    numeros [4] = 0;       // |5|2|3|7|0| | | | |1| 
    numeros [5] = 6;       // |5|2|3|7|0|6| | | |1| 
    numeros [6] = 4;       // |5|2|3|7|0|6|4| | |1|  
    numeros [7] = 8;       // |5|2|3|7|0|6|4|8| |1| 
    numeros [8] = 9;       // |5|2|3|7|0|6|4|8|9|1| 

    for(int i = 0; i < 10; i++) {
        printf("%i, ", numeros[i]);
    }

    char nome [100];    // sabor string
    printf("Entre com o seu nome: ");
    scanf("%s", nome);
    printf ("Ola %s!\n", nome);

    float notas [3];
    for (int i = 0; i < 3; i++){
        printf("Entre com a nota A%i: ", i+1);
        scanf("%f", &notas[i]);
    }

    printf("Suas notas foram ");
    for (int i = 0; i < 3; i ++) {
        printf("A%i = %.1f, ", i+1, notas [i]);
    }



    return 0;
}