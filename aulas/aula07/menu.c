#include <stdio.h>
#include <stdlib.h>

int main () {
    int opcao = 0;

    do {
        system("clear");
        printf("MENU PRINCIPAL\n");
        printf("1 - consultar saldo\n");
        printf("2 - fazer uma recarga\n");
        printf("3 - ver mensagens recebidas\n");
        printf("3 - ver mensagens recebidas\n");
        printf("4 - ver ultimas chamadas\n");
        printf("5 - sair\n");
        printf("Escolha uma opcao => ");
        scanf("%i", &opcao);
     while (getchar() != '\n');

     switch(opcao){
        case 1: printf("Seu saldo eh de R$ 10,00\n");break;
        case 2: printf("Escolha entre 10, 20 e 50\n");break;
        case 3: printf("Voce nao tem mensagens\n");break;
        case 4: printf("9999-8888\n");break;
        case 5: printf("Opcao Invalida! Tente novamente\n");break;

     }

     printf("Pressione ENTER para continuar ...");
     getchar();

    } while (opcao != 5);

    return 0;

}