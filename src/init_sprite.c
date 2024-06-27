/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** init_sprite
*/
#include "main.h"
#include <stdlib.h>

void init_sprite(game_t *game)
{
    game->sprite = malloc(sizeof(sprite_t) * TOTAL_SPRITE);
    init_sprite_lobby(game);
    init_sprite_game(game);
    init_sprite_menu(game);
}
