#include "board.h"
#include <stdio.h>

void init_board(int *board, int size) {
    for (int i=0; i < size*size; ++i) board[i] = EMPTY;
}

void print_board(const int *board, int size) {
    for (int r=0; r<size; ++r) {
        for (int c=0; c<size; ++c) {
            int v = board[r*size + c];
            char ch = (v==X_VAL) ? 'X' : (v==O_VAL) ? 'O' : '.';
            printf(" %c ", ch);
        }
        printf("\n");
    }
}

int set_cell(int *board, int size, int row, int col, int player) {
    if (row<0 || col<0 || row>=size || col>=size) return 0;
    int idx = row*size + col;
    if (board[idx] != EMPTY) return 0;
    board[idx] = player;
    return 1;
}

int check_winner(const int *board, int size) {
    for (int i=0;i<size;++i) {
        int row_val = board[i*size];
        int col_val = board[i];
        int row_same = row_val;
        int col_same = col_val;
        for (int j=1;j<size;++j) {
            if (board[i*size + j] != row_val) row_same = 0;
            if (board[j*size + i] != col_val) col_same = 0;
        }
        if (row_same && row_val != EMPTY) return row_val;
        if (col_same && col_val != EMPTY) return col_val;
    }
    int d0 = board[0];
    int d0_same = d0;
    for (int i=1;i<size;++i) if (board[i*size + i] != d0) d0_same = 0;
    if (d0_same && d0 != EMPTY) return d0;


    int d1 = board[size-1];
    int d1_same = d1;
    for (int i=1;i<size;++i) if (board[i*size + (size-1-i)] != d1) d1_same = 0;
    if (d1_same && d1 != EMPTY) return d1;
    
    int filled=1;
    for (int i=0;i<size*size;++i) if (board[i]==EMPTY) { filled=0; break; }
    if (filled) return 3;
    return 0;
}

