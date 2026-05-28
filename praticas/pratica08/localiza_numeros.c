#include <stdio.h>

int main(){                
    int numeros[10];      
    
     for (int i = 0; i < 10; i++){
        printf("Digite o numero inteiro %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    int numero = 0; 
    int posicao = -1 ;

    printf("Digite o numero que deseja encontrar: ");
    scanf("%d", &numero);

    for (int i = 0; i < 11; i++){
        if (numeros[i] == numero) {
            posicao = i;
            break;
        }
    }

    if (posicao >= 0 ){
        printf("Numero encontrado na posicao %d da sequencia. \n", posicao);
    } else {
        printf ("numero nao encontrado na sequencia. \n");

    }
      

    return 0;
}