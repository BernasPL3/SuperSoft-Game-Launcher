#include <stdio.h>
#include "launcher.h"

int main() {
    int opcao;
    int jogo;

    while(1) {
        launcher_show_menu();

        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                launcher_list_games();
                break;

            case 2:
                launcher_list_games();

                printf("\nNumero do jogo: ");
                scanf("%d", &jogo);

                launcher_launch_game(jogo);
                break;

            case 3:
                printf("Saindo...\n");
                return 0;

            default:
                printf("Opcao invalida.\n");
        }
    }
}
