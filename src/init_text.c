/*
** EPITECH PROJECT, 2024
** Flappuy bird
** File description:
** init_text
*/

#include "main.h"
#include "stdlib.h"

void init_text(game_t *game)
{
    char *score = "0";

    game->text = malloc(sizeof(text_t));
    game->text[0].font = sfFont_createFromFile("./text/ArcadeAlternate.ttf");
    game->text[0].text = sfText_create();
    sfText_setString(game->text[0].text, score);
    sfText_setFont(game->text[0].text, game->text[0].font);
    sfText_setCharacterSize(game->text[0].text, 80);
    sfText_setPosition(game->text[0].text, (sfVector2f){1650, 60});
    sfText_setFillColor(game->text[0].text, sfBlack);
}
