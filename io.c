#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sudoku.h"
#include "helper.h"
#include "algorithm.h"

void readFromFile(char filename[]) {
    FILE *file = fopen(filename, "r");
    if (file == 0) {
        printf("error while opening file \"%s\"", filename);
    }
    else {
        int x, i, j;
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                fscanf(file, "%d ", &x);
                sudoku.solved[i][j] = x;
                if(x != 0) {
                    setValue(sudoku.puzzle[i][j], x);
                    arrangeRow(x, i, j);
                    arrangeCol(x, i, j);
                    arrangeBox(x, i, j);
                }
            }
            fscanf(file, "\n");
        }
        fclose(file);
    }
}

void showSudoku() {
    int i, j;
    for (i = 0; i < 9; i++) {
        if(i % 3 == 0)
            printf("+-------+-------+-------+\n");
        for (j = 0; j < 9; j++) {
            if(j % 3 == 0)
                printf("| ");
            printf("%d ", sudoku.solved[i][j]);
            if(j == 8)
                printf("|");
        }
        printf("\n");
    }
    printf("+-------+-------+-------+\n");
}

void showAnimated() {
    clearScreen();
    int i, j, k, x;
    for(x = 0; x < 10; x++) {
        for (i = 0; i < 9; i++) {
            if(i % 3 == 0)
                printf("+-------+-------+-------+\n");
            for (j = 0; j < 9; j++) {
                if(j % 3 == 0)
                    printf("| ");
                if(absolute(sudoku.puzzle[i][j]) == 0) {
                    k = rand() % 10;
                    printf("%d ", k);
                }
                else {
                    printf("%d ", absolute(sudoku.puzzle[i][j]));
                }
                if(j == 8)
                    printf("|");
            }
            printf("\n");
            if(i == 8)
                printf("+-------+-------+-------+\n");
        }
        sleepingBeauty(70);
        fflush(stdout);
        clearScreen();
    }
}
