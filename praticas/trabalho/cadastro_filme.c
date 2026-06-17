#include <stdio.h>
#include <string.h>

#define TAM_MAX 10

// Definição da estrutura do filme
struct Filme {
    int id;
    char titulo[100];
    char diretor[50];
    int ano;
};

int main() {
    struct Filme filmes[TAM_MAX];
    int qtd_atual = 0; // Controle explícito da quantidade de registros
    int opcao = 0;

    // Loop principal do Menu
    while (opcao != 6) {
        printf("\n===================================\n");
        printf("       SISTEMA DE CADASTRO DE FILMES  \n");
        printf("===================================\n");
        printf("1. Cadastrar Filme\n");
        printf("2. Listar Filmes\n");
        printf("3. Buscar Filme por ID\n");
        printf("4. Atualizar Filme\n");
        printf("5. Remover Filme\n");
        printf("6. Sair\n");
        printf("===================================\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Entrada invalida! Digite um numero.\n");
            // Limpa o buffer do teclado para evitar loop infinito
            while (getchar() != '\n');
            continue;
        }

        switch (opcao) {
            case 1: // CADASTRAR
                if (qtd_atual >= TAM_MAX) {
                    printf("\n[ERRO] O sistema esta cheio! Limite de %d filmes atingido.\n", TAM_MAX);
                } else {
                    int novo_id;
                    int id_duplicado = 0;

                    printf("\n--- Cadastrar Novo Filme ---\n");
                    printf("Digite o ID (unico): ");
                    scanf("%d", &novo_id);

                    // Validação de ID duplicado
                    for (int i = 0; i < qtd_atual; i++) {
                        if (filmes[i].id == novo_id) {
                            id_duplicado = 1;
                            break;
                        }
                    }

                    if (id_duplicado) {
                        printf("\n[ERRO] Ja existe um filme cadastrado com o ID %d!\n", novo_id);
                    } else if (novo_id <= 0) {
                        printf("\n[ERRO] O ID deve ser um numero positivo!\n");
                    } else {
                        filmes[qtd_atual].id = novo_id;
                        
                        // Limpar buffer antes de ler strings
                        while (getchar() != '\n'); 

                        printf("Titulo do Filme: ");
                        fgets(filmes[qtd_atual].titulo, sizeof(filmes[qtd_atual].titulo), stdin);
                        filmes[qtd_atual].titulo[strcspn(filmes[qtd_atual].titulo, "\n")] = '\0'; // Remove o \n

                        printf("Diretor: ");
                        fgets(filmes[qtd_atual].diretor, sizeof(filmes[qtd_atual].diretor), stdin);
                        filmes[qtd_atual].diretor[strcspn(filmes[qtd_atual].diretor, "\n")] = '\0';

                        printf("Ano de Lancamento: ");
                        scanf("%d", &filmes[qtd_atual].ano);

                        qtd_atual++;
                        printf("\n[SUCESSO] Filme cadastrado com sucesso!\n");
                    }
                }
                break;

            case 2: // LISTAR
                if (qtd_atual == 0) {
                    printf("\n[AVISO] Nenhum filme cadastrado ate o momento.\n");
                } else {
                    printf("\n--- Lista de Filmes Cadastrados (%d/%d) ---\n", qtd_atual, TAM_MAX);
                    for (int i = 0; i < qtd_atual; i++) {
                        printf("Posicao %d | ID: %d | Titulo: %s | Diretor: %s | Ano: %d\n", 
                                i, filmes[i].id, filmes[i].titulo, filmes[i].diretor, filmes[i].ano);
                    }
                }
                break;

            case 3: // BUSCAR POR ID
                if (qtd_atual == 0) {
                    printf("\n[AVISO] Nao ha registros para buscar.\n");
                } else {
                    int id_busca;
                    int encontrado = -1;

                    printf("\nDigite o ID do filme que deseja buscar: ");
                    scanf("%d", &id_busca);

                    for (int i = 0; i < qtd_atual; i++) {
                        if (filmes[i].id == id_busca) {
                            encontrado = i;
                            break;
                        }
                    }

                    if (encontrado != -1) {
                        printf("\n--- Filme Encontrado ---\n");
                        printf("ID: %d\n", filmes[encontrado].id);
                        printf("Titulo: %s\n", filmes[encontrado].titulo);
                        printf("Diretor: %s\n", filmes[encontrado].diretor);
                        printf("Ano: %d\n", filmes[encontrado].ano);
                    } else {
                        printf("\n[ERRO] Filme com ID %d nao foi encontrado.\n", id_busca);
                    }
                }
                break;

            case 4: // ATUALIZAR
                if (qtd_atual == 0) {
                    printf("\n[AVISO] Nao ha registros para atualizar.\n");
                } else {
                    int id_atualizar;
                    int encontrado = -1;

                    printf("\nDigite o ID do filme que deseja atualizar: ");
                    scanf("%d", &id_atualizar);

                    for (int i = 0; i < qtd_atual; i++) {
                        if (filmes[i].id == id_atualizar) {
                            encontrado = i;
                            break;
                        }
                    }

                    if (encontrado != -1) {
                        printf("\n--- Editando o Filme: %s ---\n", filmes[encontrado].titulo);
                        
                        while (getchar() != '\n'); // Limpa buffer

                        printf("Novo Titulo: ");
                        fgets(filmes[encontrado].titulo, sizeof(filmes[encontrado].titulo), stdin);
                        filmes[encontrado].titulo[strcspn(filmes[encontrado].titulo, "\n")] = '\0';

                        printf("Novo Diretor: ");
                        fgets(filmes[encontrado].diretor, sizeof(filmes[encontrado].diretor), stdin);
                        filmes[encontrado].diretor[strcspn(filmes[encontrado].diretor, "\n")] = '\0';

                        printf("Novo Ano de Lancamento: ");
                        scanf("%d", &filmes[encontrado].ano);

                        printf("\n[SUCESSO] Dados atualizados com sucesso!\n");
                    } else {
                        printf("\n[ERRO] Filme com ID %d nao encontrado.\n", id_atualizar);
                    }
                }
                break;

            case 5: // REMOVER
                if (qtd_atual == 0) {
                    printf("\n[AVISO] Nao ha registros para remover.\n");
                } else {
                    int id_remover;
                    int encontrado = -1;

                    printf("\nDigite o ID do filme que deseja remover: ");
                    scanf("%d", &id_remover);

                    for (int i = 0; i < qtd_atual; i++) {
                        if (filmes[i].id == id_remover) {
                            encontrado = i;
                            break;
                        }
                    }

                    if (encontrado != -1) {

                        for (int i = encontrado; i < qtd_atual - 1; i++) {
                            filmes[i] = filmes[i + 1];
                        }
                        
                        qtd_atual--; // Decrementa a quantidade atual de registros
                        printf("\n[SUCESSO] Filme removido com sucesso!\n");
                    } else {
                        printf("\n[ERRO] Filme com ID %d nao encontrado.\n", id_remover);
                    }
                }
                break;

            case 6: // SAIR
                printf("\nEncerrando o programa... Ate logo!\n");
                break;

            default:
                printf("\n[ERRO] Opcao invalida! Escolha uma opcao entre 1 e 6.\n");
                break;
        }
    }

    return 0;
}