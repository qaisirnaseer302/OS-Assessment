# Worksheet 0 — Advanced Systems Programming

This worksheet is an introduction to essential C programming concepts needed for later assessments.  
It includes: pointer manipulation, pointer arithmetic with arrays, file I/O, modular programming, and compiling multi-file projects.

Although Worksheet 0 does not carry marks, completing it is **mandatory** before proceeding to other worksheets.

---

## ✔ Tasks Completed

| Task      | Status | Description |
|:------:   |:-----: |-------------|
| Task 1    | ✅    | Pointer to a local variable, pointer to array, printing values & addresses |
| Task 2    | ✅    | Compare two arrays using pointers (return 1 if equal, otherwise 0) |
| Task 3    | ✅    | Read numbers from a file and print their sum |
| Task 4    | ✅    | Swap two integers using pointers |
| Task 5    | ✅    | Print a 2D array using pointer arithmetic |
| TicTacToe | ✅    | Multi-file modular C program using pointers, loops, condition checking |

---

## 🧪 How to Compile & Run Programs (Locally)

### Compile individual tasks
```bash
clang -o task1 task1.c
clang -o task2 task2.c
clang -o task3 task3.c
clang -o task4 task4.c
clang -o task5 task5.c 
```

##  Run Them
./task1
./task2
./task3
./task4
./task5

## Tic Tac Toe

Folder Structure :-
``` main.c
    board.c
    utlis.c
    board.h
    utils.h
```
Navigate into Folder :-
```bash
cd Tic_Tac_Toe
```
Compile each file :-
```bash
clang std=c11 -Wall -Wextra -o tictactoe main.c board.c utlis.c
```

### Run Them 
```bash
./tictactoe
```