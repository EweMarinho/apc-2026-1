#include <stdio.h>

int main (){

   float notas[10][2];
   float media[10];
   int i, j;

   //Leitura das notas

    for (i = 0; i < 10; i++){
        printf("Aluno %d:\n", i + 1);
        for(j = 0; j < 2; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    //Calculo da media

    media[i] = (notas[i][0] + notas[i][1]) / 2.0;
        printf("\n");
    }

    // Exibição do boletim
    printf("\n===== Boletim da Turma =====\n");
    for (i = 0; i < 10; i++) {
        printf("Aluno %d - Nota 1: %.2f | Nota 2: %.2f | Media: %.2f\n",
               i + 1, notas[i][0], notas[i][1], media[i]);
    }


return 0;    
}