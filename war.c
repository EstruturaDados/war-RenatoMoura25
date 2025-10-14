#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5

// Definição da struct
struct Territorio {
    char nome[50];
    char corExercito[30];
    int numTropas;
};

int main() {
    struct Territorio territorios[QTD_TERRITORIOS];

    printf("=== Cadastro de Territórios ===\n\n");

    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);

        // Leitura do nome
        printf("Nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove '\n'

        // Leitura da cor do exército
        printf("Cor do exército: ");
        fgets(territorios[i].corExercito, sizeof(territorios[i].corExercito), stdin);
        territorios[i].corExercito[strcspn(territorios[i].corExercito, "\n")] = '\0';

        // Leitura do número de tropas
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].numTropas);

        // Limpa o buffer do teclado antes da próxima fgets
        getchar();

        printf("\n");
    }

    // Exibição do estado atual do mapa
    printf("\n=== Estado Atual do Mapa ===\n\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].corExercito);
        printf("Número de Tropas: %d\n", territorios[i].numTropas);
        printf("-----------------------------\n");
    }

    return 0;
}
