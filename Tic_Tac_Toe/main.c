#include <stdio.h>
#include "board.h"
#include "utils.h"

int main() {
    const int size = 3;
    int board[9];
    init_board(board, size);
    int player = X_VAL;
    while (1) {
        print_board(board, size);
        printf("Player %c enter row col (0-based): ", player==X_VAL ? 'X' : 'O');
        int r, c;
        if (!read_move(&r, &c)) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        if (!set_cell(board, size, r, c, player)) {
            printf("Invalid move. Try again.\n");
            continue;
        }
        int result = check_winner(board, size);
        if (result == X_VAL) { print_board(board,size); printf("X wins!\n"); break; }
        if (result == O_VAL) { print_board(board,size); printf("O wins!\n"); break; }
        if (result == 3) { print_board(board,size); printf("Draw!\n"); break; }
        player = (player==X_VAL) ? O_VAL : X_VAL;
    }
    return 0;
}

