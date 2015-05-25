# Sudoku Solver With C
Sudoku solver written in C, by a C noob.
######That program can solve easy and some medium diffuculty puzzles.

##Usage
####1. Create a sudoku file like this:

<pre>
    example.txt
0 0 3 0 2 0 6 0 0
9 0 0 3 0 5 0 0 1
0 0 1 8 0 6 4 0 0
0 0 8 1 0 2 9 0 0
7 0 0 0 0 0 0 0 8
0 0 6 7 0 8 2 0 0
0 0 2 6 0 9 5 0 0
8 0 0 2 0 3 0 0 9
0 0 5 0 1 0 3 0 0
</pre>

###2. Compile the code.
gcc -o Sudoku *.c
###2. Execute from terminal

<pre>
./Sudoku example.txt
</pre>
If you don't use second argument, it will set "sudoku.txt" by default.    

