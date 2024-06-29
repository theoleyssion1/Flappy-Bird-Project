/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** event_lobby
*/

#include "main.h"

void init_stats(game_t *game)
{
    game->sprite[PLAY_BUTTON].rect_float =
    sfSprite_getGlobalBounds(game->sprite[PLAY_BUTTON].sprite);
    game->sprite[QUIT].rect_float =
    sfSprite_getGlobalBounds(game->sprite[QUIT].sprite);
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
}

void event_lobby(game_t *game)
{
    init_stats(game);
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed ||
        (sfFloatRect_contains(&game->sprite[QUIT].rect_float,
        game->mouse.x, game->mouse.y) == sfTrue &&
        sfMouse_isButtonPressed(sfMouseLeft)) == sfTrue) {
            sfRenderWindow_close(game->window->window);
            save_score(game);
        }
        if ((sfFloatRect_contains(&game->sprite[PLAY_BUTTON].rect_float,
        game->mouse.x, game->mouse.y) == sfTrue) &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
            init_at_zero(game);
            game->loop = GAME;
            loop(game);
        }
    }
}
