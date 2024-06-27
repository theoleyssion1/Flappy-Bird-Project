/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** pause_game
*/

#include "main.h"

void pause_game(game_t *game)
{
    game->sprite[PAUSE].rect_float =
    sfSprite_getGlobalBounds(game->sprite[PAUSE].sprite);
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    if ((sfFloatRect_contains(&game->sprite[PAUSE].rect_float,
    game->mouse.x, game->mouse.y) == sfTrue &&
    sfMouse_isButtonPressed(sfMouseLeft)) == sfTrue)
        loop_menu(game);
}
