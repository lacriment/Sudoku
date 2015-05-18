#include "helper.h"
#include "sudoku.h"

void delPossib(int value, int row, int col) {
    int i;
    for (i = 0; i < 9; i++)
        if (sudoku.puzzle[row][col][i] == value)
            sudoku.puzzle[row][col][i] = 0;
}

void arrangeRow(int value, int row, int col) {
    int i,j;
    for ( i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            if (i != col)
                if (sudoku.puzzle[row][i][j] == value)
                    sudoku.puzzle[row][i][j] = 0;
}

void arrangeCol(int value, int row, int col) {
    int i,j;
    for ( i = 0; i < 9; i++)
        for ( j = 0; j < 9; j++)
            if (i != row)
                if (sudoku.puzzle[i][col][j] == value)
                    sudoku.puzzle[i][col][j] = 0;
}

void arrangeBox(int value, int row, int col) {
    int i, j;
    int r = row, c = col;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (r != row || c != col)
                delPossib(value, r, c);
            if (r % 3 == 0)
                r += 2;
            else
                r--;
        }
        if (c % 3 == 0)
            c += 2;
        else
            c--;
    }
}

void solve(int *round, int limit){
    int i, j;
    int counter = 0;
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (absolute(sudoku.puzzle[i][j]) != 0){
                counter++;
                arrangeRow(absolute(sudoku.puzzle[i][j]), i, j);
                arrangeCol(absolute(sudoku.puzzle[i][j]), i, j);
                arrangeBox(absolute(sudoku.puzzle[i][j]), i, j);
                sudoku.solved[i][j] = absolute(sudoku.puzzle[i][j]);
            }
        }
    }
    *round += 1;
    if (*round > limit)
        counter = 81;
    if (counter < 81)
        solve(round, limit);
}
/*
 * 00 01 02
 * 10 11 12
 * 20 21 22
*/
void myNewParadigm() {
    int i, j, k;
    for(i = 0; i < 7; i += 3) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                printf("(%d %d)", j+i, k);
            }
            puts("");
         }
    }
}

