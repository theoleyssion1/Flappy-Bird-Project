/*
** EPITECH PROJECT, 2024
** Flappuy bird
** File description:
** score
*/
#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* intToStr(int num)
{
    int temp = num;
    int length = (num == 0) ? 1 : 0;
    int isNegative = 0;
    char* str = (char*)malloc((length + 1) * sizeof(char));

    while (temp != 0) {
        length++;
        temp /= 10;
    }
    if (num < 0) {
        isNegative = 1;
        length++;
        num = -num;
    }
    if (str == NULL)
        return NULL;
    str[length] = '\0';
    for (int i = length - 1; i >= isNegative; i--) {
        str[i] = (num % 10) + '0';
        num /= 10;
    }
    if (isNegative)
        str[0] = '-';
    return str;
}

void score_board(game_t *game)
{
    game->nbr_score = intToStr(game->score[game->nbr_game]);
    sfText_setString(game->text[0].text, game->nbr_score);
}
