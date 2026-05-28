#include <stdio.h>
#include <string.h>

int main(){
    char texto[11];
    texto [0] = 'o';
    texto [1] = 'l';
    texto [2] = 'a';
    texto [3] = ' ';
    texto [4] = 'p';
    texto [5] = 'e';
    texto [6] = 's';
    texto [7] = 's';
    texto [8] = 'o';
    texto [9] = 'a';
    texto [10] = 'l';

    printf("%s\n", texto);

    strcpy(texto, "Bom ");
    printf("%s\n", texto);

    for(int i= 0; i<11; i++){
        printf("%c", texto[i]);
    }

printf("\n");


// concatenar a string
strcat(texto, "dia");
printf("%s\n", texto);

// tamanho da string
int tamanho = strlen(texto);
printf("O texto '%s' tem %i caracteres\n", texto, tamanho);

int capacidade = sizeof (texto);
printf("O texto guarda ateh %i caracteres\n", capacidade);

// preencher a string com um caracter
memset(texto, 'a', 8);
printf("%s\n", texto);

// sempre que for manipular string, zerar ele

memset(texto, '\0', capacidade);
printf("%s\n", texto);

//string > outra, string  == outra 

//< 0 ordem eh antes
int compara = strcmp("banana", "laranja"); 
printf("compara banana com laranja = %i\n", compara);

//> 0 ordem é depois
compara = strcmp( "laranja", "banana"); 
printf("compara laranja com banana = %i\n", compara);

// 0 = sao iguais
compara = strcmp( "banana", "banana"); 
printf("compara banana com banana = %i\n", compara);

//> 0 Maiusculo na frente do Minusculo
compara = strcmp( "banana", "BANANA"); 
printf("compara banana com BANANA = %i\n", compara);

char *tem_letra_a = strchr("sergipe", 'a');
printf(" sergipe tem a letra 'a' ? %s \n", tem_letra_a);

tem_letra_a = strchr("roraima", 'a');
printf(" roraima tem a letra 'a' ? %s\n", tem_letra_a);

//procurar uma string na string

char *tem_silva = strstr("joao da silva neto", "silva");
printf("'joao da silva neto' tem 'silva'? %s\n", tem_silva);

tem_silva = strstr("jao de sousa", "silva");
printf("'joao sousa' tem 'silva'? %s\n", tem_silva);

return 0;
}