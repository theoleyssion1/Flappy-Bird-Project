/*
** EPITECH PROJECT, 2024
** Flappy-Bird
** File description:
** lose_game
*/

#include "main.h"

void check_bird_and_tube(game_t *game)
{
    game->sprite[BIRD].rect_float =
    sfSprite_getGlobalBounds(game->sprite[BIRD].sprite);
    game->sprite[UP_TUBE].rect_float =
    sfSprite_getGlobalBounds(game->sprite[UP_TUBE].sprite);
    game->sprite[DOWN_TUBE].rect_float =
    sfSprite_getGlobalBounds(game->sprite[DOWN_TUBE].sprite);
    if ((sfFloatRect_intersects(&game->sprite[BIRD].rect_float,
        &game->sprite[UP_TUBE].rect_float, NULL) == sfTrue) ||
        (sfFloatRect_intersects(&game->sprite[BIRD].rect_float,
        &game->sprite[DOWN_TUBE].rect_float, NULL) == sfTrue)) {
        loop_game_over(game);
    }
}
