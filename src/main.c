#include <stdio.h>

int main() {
    int escolha;

    while (1) {
        printf("\n=== SuperSoft Game Launcher ===\n");
        printf("1. Abrir jogo\n");
        printf("2. Lista de jogos\n");
        printf("3. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Abrindo jogo...\n");
                break;
            case 2:
                printf("Jogos instalados:\n");
                printf("- Bread Kart\n");
                printf("- Cube Adventure\n");
                break;
            case 3:
                return 0;
            default:
                printf("Opcao invalida\n");
        }
    }
}
