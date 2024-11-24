#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "score.h"

// Fun��o de menu
void displayMenu() {
    int choice;
    do {
        printf("\n--- Jogo de Labirinto ---\n");
        printf("1. Iniciar Jogo\n");
        printf("2. Estat�sticas\n");
        printf("3. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                startGame();  // Iniciar o jogo
                break;
            case 2:
                displayStats(); // Exibir as estat�sticas
                break;
            case 3:
                printf("Saindo do jogo. At� logo!\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (choice != 3); // Repete at� o jogador escolher sair
}

int main() {
    displayMenu(); // Exibe o menu principal
    return 0;
}
