#include <stdio.h>

const char* games[] = {
    "Bread Kart",
    "Cube Adventure",
    "Pixel Runner"
};

int game_count = sizeof(games) / sizeof(games[0]);

void games_list() {
    printf("\n=== Biblioteca ===\n");

    for(int i = 0; i < game_count; i++) {
        printf("%d - %s\n", i, games[i]);
    }
}
