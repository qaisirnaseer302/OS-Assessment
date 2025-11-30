#ifndef BOARD_H
#define BOARD_H

#define EMPTY 0
#define X_VAL 1
#define O_VAL 2

void init_board(int *board, int size);
void print_board(const int *board, int size);
int set_cell(int *board, int size, int row, int col, int player);
int check_winner(const int *board, int size);

#endif

