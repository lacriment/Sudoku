# Sudoku Solver With C
Sudoku solver written in C, by a C noob.
######That program can solve easy and some medium diffuculty puzzles.

##Usage
####1. Creating sudoku

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
###2. Changing main.c

open "main.c" file with a text editor and change this line for your filename
<pre>char file[50] = "example.txt";</pre>

###3. Compile the projects and run!

You should see solved puzzle like:

<pre>
4 8 3 9 2 1 6 5 7 
9 6 7 3 4 5 8 2 1 
2 5 1 8 7 6 4 9 3 
5 4 8 1 3 2 9 7 6 
7 2 9 5 6 4 1 3 8 
1 3 6 7 9 8 2 4 5 
3 7 2 6 8 9 5 1 4 
8 1 4 2 5 3 7 6 9 
6 9 5 4 1 7 3 8 2 
</pre>

