/*
** EPITECH PROJECT, 2024
** Flappy_bird
** File description:
** save
*/
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>


void save_score(game_t *game)
{
    FILE *file = fopen("./save_score.txt", "w");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return;
    }
    for (; game->nbr_game != 0; game->nbr_game -= 1)
        fprintf(file, "score: %i\n", game->score[game->nbr_game]);
    fclose(file);
    printf("information saved successfully in the file: %s.\n",
            "save_score.txt");
}
