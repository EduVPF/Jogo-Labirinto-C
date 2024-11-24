#ifndef GAME_H
#define GAME_H

// Defini��o da struct Player
typedef struct {
    int x, y;   // Posi��es do jogador
    int score;  // Pontua��o do jogador
} Player;

void initializeBoard(int **board);        
void loadPhase(int phase, int **board);  
void printBoard(int **board, Player player, int timeLeft); // Imprime o tabuleiro e o tempo restante
int moverPlayer(int **board, Player *player, char move);    
void startGame();   

#endif 

