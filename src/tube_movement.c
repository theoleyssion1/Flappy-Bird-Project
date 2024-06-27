/*
** EPITECH PROJECT, 2024
** Flappy-Bird
** File description:
** tube_movement
*/

#include "main.h"
#include <stdlib.h>

void tube_movement(game_t *game)
{
    game->sprite[UP_TUBE].pos.x += game->speed;
    game->sprite[DOWN_TUBE].pos.x += game->speed;
    sfSprite_setPosition(game->sprite[UP_TUBE].sprite,
        game->sprite[UP_TUBE].pos);
    sfSprite_setPosition(game->sprite[DOWN_TUBE].sprite,
        game->sprite[DOWN_TUBE].pos);
}

int random_nbr(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void reset_tube(game_t *game)
{
    if (game->sprite[UP_TUBE].pos.x < -50) {
        game->sprite[UP_TUBE].pos.x = 2000;
        game->sprite[DOWN_TUBE].pos.x = 2000;
        game->score[game->nbr_game] += 1;
        game->sprite[UP_TUBE].pos.y = random_nbr(110, 500) * -1;
        game->sprite[DOWN_TUBE].pos.y = random_nbr(600, 1000);
        sfSprite_setPosition(game->sprite[UP_TUBE].sprite,
            game->sprite[UP_TUBE].pos);
        sfSprite_setPosition(game->sprite[DOWN_TUBE].sprite,
            game->sprite[DOWN_TUBE].pos);
        game->speed -= 0.3;
    }
}
