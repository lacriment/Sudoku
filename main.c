#include <stdio.h>
#include <time.h>

#include "helper.h"
#include "sudoku.h"
#include "io.h"
#include "algorithm.h"

int main(int argc, const char *argv[]) {
    if(argc != 2 ) {
        printf("warning: no filename given!\ncorrect usage: ./Sudoku filename\n");
        argv[1] = "sudoku.txt";
    }
    int round = 0;
    int *pRound = &round;
    myNewParadigm();
    initPossib(sudoku.puzzle);
    readFromFile(argv[1]);

    showSudoku();
    puts("Start?");
    getchar();

    showAnimated();
    clock_t tic, toc;
    tic = clock();
    solve(pRound, 24);
    toc = clock();

    showSudoku();
    if(*pRound > 24)
        puts("Algorithm is not able to solve this puzzle!");
    printf("\nAlgorithm called %d times.\n", *pRound);
    printf("Process time(real): %f seconds. \n", (double)(toc -tic) / CLOCKS_PER_SEC);

    return 0;
}


