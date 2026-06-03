#include <stdio.h>

int main(){             
    int tabela [3][3];

    //    0 1 2 
    // 0 | | | |       
    // 1 | | | |
    // 2 | | | |

    tabela [1][2] = 0;

    //    0 1 2 
    // 0 | | | |       
    // 1 | | |0|
    // 2 | | | |

    printf(" Preencha a tabela 3x3");
    // percorre as linhas
    for (int i = 0; i < 3; i++) {
        // percorre as colunas
        for (int j = 0; j < 3; j++){
            printf("Entre com um valor para a posicao [%i, %i]: ", i, j);
            scanf("%i", &tabela[i][j]);
        }
    
    printf ("Sua tabela ficou assim: \n");
    for (int i = 0; i < 3; i++) {
        // percorre as colunas
        for (int j = 0; j < 3; j++){
            printf("%i", tabela [i][j]);
         
        }
        printf("\n");
    }


   
}

 return 0;

}