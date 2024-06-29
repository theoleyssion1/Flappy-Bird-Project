/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** main
*/

#include "main.h"
#include <string.h>

int main(int argc, char const **argv)
{
    game_t game;

    if (argc == 2 && strcmp(argv[1], "-h") == 0)
        return print_help();
    if (argc != 1)
        return 84;
    init_all(&game);
    game.loop = START;
    loop(&game);
    destroy_all(&game);
    return 0;
}
