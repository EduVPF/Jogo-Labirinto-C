#include <stdio.h>
#include "score.h"

typedef struct {
    int score;
} PlayerScore;

// Fun��o para salvar a pontua��o no arquivo bin�rio
void saveScore(int score) {
    FILE *file = fopen("scores.bin", "ab");
    if (file == NULL) {
        printf("Erro ao salvar a pontua��o\n");
        return;
    }

    PlayerScore ps = {score};
    fwrite(&ps, sizeof(PlayerScore), 1, file);
    fclose(file);
}

// Fun��o para exibir as estat�sticas
void displayStats() {
    FILE *file = fopen("scores.bin", "rb");
    if (file == NULL) {
        printf("Nenhuma pontua��o salva.\n");
        return;
    }

    PlayerScore ps;
    printf("\n--- Estat�sticas ---\n");
    while (fread(&ps, sizeof(PlayerScore), 1, file)) {
        printf("Pontua��o: %d\n", ps.score);
    }
    fclose(file);
}
