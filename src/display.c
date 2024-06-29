/*
** EPITECH PROJECT, 2024
** Flappuy bird
** File description:
** display
*/

#include "main.h"

void display_game(game_t *game)
{
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
}

void display_menu(game_t *game)
{
    event_lobby(game);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[TITLE].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[PLAY_BUTTON].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[QUIT].sprite, NULL);
}

void display_loose(game_t *game)
{
    event_game_over(game);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[BACKGROUND].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[GAME_OVER].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[MENU].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
        game->sprite[RETRY].sprite, NULL);
    sfRenderWindow_drawText(game->window->window, game->text[0].text,
        NULL);
}
