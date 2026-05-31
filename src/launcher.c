#include <stdio.h>
#include "launcher.h"

void launcher_show_menu() {
    printf("\n=== SuperSoft Game Launcher ===\n");
    printf("1. Lista de Jogos\n");
    printf("2. Abrir Jogo\n");
    printf("3. Sair\n");
}

void launcher_list_games() {
    printf("\nJogos Instalados:\n");
    printf("0 - Bread Kart\n");
    printf("1 - Cube Adventure\n");
    printf("2 - Pixel Runner\n");
}

void launcher_launch_game(int index) {
    switch(index) {
        case 0:
            printf("Iniciando Bread Kart...\n");
            break;
        case 1:
            printf("Iniciando Cube Adventure...\n");
            break;
        case 2:
            printf("Iniciando Pixel Runner...\n");
            break;
        default:
            printf("Jogo nao encontrado.\n");
            break;
    }
}
