#include <stdio.h>
#include <string.h>

struct player 
{
    char name[12];
    int score;
};

int main() {
    struct player Player1;
    struct player Player2;
    struct player Player3;

    strcpy(Player1.name, "John");
    Player1.score = 4;

    strcpy(Player2.name, "Mary");
    Player2.score = 5;

    strcpy(Player3.name, "Ann");
    Player3.score = 7;

    printf("%s has a score of %d \n", Player1.name,Player1.score);
    printf("%s has a score of %d \n", Player2.name,Player2.score);
    printf("%s has a score of %d \n", Player3.name,Player3.score);

    return 0;
}
