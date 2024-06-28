/*
** EPITECH PROJECT, 2024
** Flappy bird
** File description:
** loop
*/

#include "main.h"
#include <stdio.h>

void loop_menu(game_t *game)
{
    sfRenderWindow_clear(game->window->window, sfBlack);
    while (sfRenderWindow_isOpen(game->window->window)) {
        sfRenderWindow_clear(game->window->window, sfBlack);
        event_lobby(game);
        sfRenderWindow_drawSprite(game->window->window,
        game->sprite[BACKGROUND].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
        game->sprite[TITLE].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
        game->sprite[PLAY_BUTTON].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
        game->sprite[QUIT].sprite, NULL);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_game(game_t *game)
{
    init_sprite(game);
    game->speed = -6;
    game->nbr_game += 1;
    game->score[game->nbr_game] = 0;
    score_board(game);
    sfRenderWindow_clear(game->window->window, sfBlack);
    while (sfRenderWindow_isOpen(game->window->window)) {
        sfRenderWindow_clear(game->window->window, sfBlack);
        event_game(game);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[BACKGROUND].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[PAUSE].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[UP_TUBE].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[DOWN_TUBE].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[BIRD].sprite, NULL);
        sfRenderWindow_drawText(game->window->window, game->text[0].text, NULL);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_game_over(game_t *game)
{
    sfRenderWindow_clear(game->window->window, sfBlack);
    while (sfRenderWindow_isOpen(game->window->window)) {
        sfRenderWindow_clear(game->window->window, sfBlack);
        event_game_over(game);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[BACKGROUND].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[GAME_OVER].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[MENU].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
            game->sprite[RETRY].sprite, NULL);
        sfRenderWindow_drawText(game->window->window, game->text[0].text, NULL);
        sfRenderWindow_display(game->window->window);
    }
}
