#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "score.h"

// Função do menu
void displayMenu() {
    int choice;
    do {
        printf("\n--- Jogo de Labirinto ---\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Pontuações\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                startGame();  
                break;
            case 2:
                displayStats(); // Exibir as Pontuações 
                break;
            case 3:
                printf("Saindo do jogo. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (choice != 3); // Repete até o jogador escolher sair
}

int main() {
    displayMenu(); // Exibe o menu principal
    return 0;
}
