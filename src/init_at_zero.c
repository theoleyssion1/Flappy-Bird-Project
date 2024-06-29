/*
** EPITECH PROJECT, 2024
** Flappuy bird
** File description:
** init_at_zero
*/

#include "main.h"
#include <stdlib.h>

void init_at_zero(game_t *game)
{
    init_sprite(game);
    game->speed = -15;
    game->nbr_game += 1;
    game->score[game->nbr_game] = 0;
    score_board(game);
}
