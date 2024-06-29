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

int lenghtreturn(int num, int length)
{
    if (num == 0) {
        length = 1;
    } else {
        for (int temp = num; temp != 0; temp /= 10)
            length++;
    }
    return length;
}

char *inttostr(int num)
{
    int length = 0;
    int isNegative = 0;
    char *str;

    length = lenghtreturn(num, length);
    if (num < 0) {
        isNegative = 1;
        length++;
        num = -num;
    }
    str = malloc((length + 1) * sizeof(char));
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
    char *str = inttostr(game->score[game->nbr_game]);

    game->nbr_score = str;
    sfText_setString(game->text[0].text, game->nbr_score);
}
