#include <stdio.h>

int main(){             
   int n, i;
   float soma = 0, media;

   printf("Digite a quantidade de numeros: ");
   scanf("%d", &n);

   int vetor[n];

   for (i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
   }

    media = soma / n;

    printf("A media aritimetica eh: %.2f\n", media);

    return 0;
}