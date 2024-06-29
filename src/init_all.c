/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** int_all
*/
#include "main.h"
#include <stdlib.h>

int init_all(game_t *game)
{
    init_window(game);
    game->score = malloc(sizeof(int) * 1000);
    init_sprite(game);
    init_text(game);
    game->speed = -15;
    return 0;
}
