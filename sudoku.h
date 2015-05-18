#ifndef SUDOKU_H
#define SUDOKU_H

typedef struct {
    int puzzle[9][9][9];
    int solved[9][9];

} Sudoku;

Sudoku sudoku;

#endif // SUDOKU_H

