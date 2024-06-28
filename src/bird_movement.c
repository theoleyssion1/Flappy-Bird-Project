/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** bird_movement
*/

#include "main.h"

void up_to_jump(game_t *game)
{
    if (game->sprite[BIRD].pos.y < 0) {
    } else {
        game->sprite[BIRD].pos.y -= 10;
    }
    sfSprite_setPosition(game->sprite[BIRD].sprite, game->sprite[BIRD].pos);
}

void drop(game_t *game)
{
    if (game->sprite[BIRD].pos.y > game->window->videomode.height - 80) {
    } else {
        game->sprite[BIRD].pos.y += 10;
    }
    sfSprite_setPosition(game->sprite[BIRD].sprite, game->sprite[BIRD].pos);
}

void movement_of_bird(game_t *game)
{
    if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
        up_to_jump(game);
    } else {
        drop(game);
    }
}
