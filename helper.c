/*
 * Helper Functions
*/

#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#endif

#ifdef linux
#include <unistd.h>
#endif

void sleepingBeauty(int ms) {
#ifdef linux
    usleep(ms * 1000);
#endif
#ifdef _WIN32
    Sleep(ms);
#endif
}

void clearScreen() {
#ifdef linux
    system("clear");
#endif
#ifdef _WIN32
    clrscr();
#endif
}

int absolute(int *array) {
    int i, val, j = 0;
    for (i = 0; i < 9; i++) {
        if (array[i] != 0) {
            val = array[i];
            j++;
        }
    }
    if (j != 1)
        return 0;
    else
        return val;
}

void initPossib(int array[9][9][9]) {
    int i, j, k;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            for (k = 0; k < 9; k++)
                array[i][j][k] = k + 1;
}

void setValue(int array[], int value) {
    int i;
    for (i = 0; i < 9; i++)
        if (array[i] != value)
            array[i] = 0;
}

int isPossible(int array[], int value) {
    int i;
    for(i = 0; i < 9; i++) {
        if(array[i] == value)
            return 1;
    }
    return 0;
}
