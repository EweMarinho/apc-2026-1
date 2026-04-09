#include <stdio.h>

int main (){
    int idade;
    char sexo;
    float altura;
    float peso;

    idade = 35;
    sexo = 'M';
    altura = 1.8;
    peso = 99.00;
 
    printf("%u\n", idade);
    printf("%c\n", sexo);
    printf("%.2f\n", altura);
    printf("%.2f\n", peso);
    return 0;
 }
 