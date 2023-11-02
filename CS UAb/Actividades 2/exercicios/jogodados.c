#include <stdio.h>
#include <stdlib.h>

unsigned int randaux() {
    static long seed = 1;
    return (((seed = seed * 214013L + 2531011L) >> 16) & 0x7fff);
}

int rollDie() {
    return (randaux() % 6) + 1;
}

int main() {
    int numGames;
    int numRolls;

    scanf("%d", &numGames);

    if (numGames < 1) {
        printf("Número de jogos inválido.\n");
        return 1;
    }

    scanf("%d", &numRolls);

    if (numRolls < 2) {
        printf("Número de lançamentos inválido.\n");
        return 1;
    }
    
    int total = 0;

    for (int game = 1; game <= numGames; game++) {
        int totalPoints = 0;
        int consecutiveDoubles = 0;

        //printf("Jogo %d:\n", game);
        for (int roll = 1; roll <= numRolls; roll++) {
            int die = rollDie();
            printf("%d ", die);
            
            if (roll > 1 && die == consecutiveDoubles) {
                totalPoints += die;
                totalPoints = totalPoints * (-1);
                //printf("Pontos: %d\n", totalPoints);
                break;
            }

            consecutiveDoubles = die;
            totalPoints += die;
        }
        total += totalPoints;
        printf("Pontos: %d\n", totalPoints);
    }
    
    printf("%d",total);
    
    return 0;
}
