/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** int_all
*/
#include "main.h"

int init_all(game_t *game)
{
    init_window(game);
    init_sprite(game);
    game->speed = -6;
    game->nbr_game = 0;
    return 0;
}
