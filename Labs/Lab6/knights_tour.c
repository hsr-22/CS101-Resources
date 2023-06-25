#include <stdio.h>

int board[8][8];

void init_board(void) {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            board[i][j] = 0;
        }
    }
}

void print_board(void) {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            printf("%4d ", board[i][j]);
        }
        printf("\n");
    }
}

int isValidMove(int r, int c, int move) {
    int newr, newc;
    newr = r + horizontal[move];
    newc = c + vertical[move];
    if(newr >= 0 && newr < 8 && newc >= 0 && newc < 0 && board[newr][newc] == 0) {
        return 1;
    }
    else return 0;
}

int getFirstValidMove(int r, int c) {
    for (int move = 0; move < 8; move++) {
        if(isValidMove(r, c, move)) {
            return move;
        }
    }
    return -1;
}

int getRandomValidMove(int r, int c) {
    int move;
    int timeout = 0;
    do {
        move = rand() % 8;
        if(isValidMove(r, c, move)) {
            return move;
        }
        timeout++;
    } while (timeout < 100);
    return -1;
}

int main(void) {
    int counter = 1; //step count of knight
    board[currentRow][currentColumn] = counter;
    int moveNumber;
    while( (moveNumber=isValidMove(currentRow, currentColumn, moveType)) >= 0) {
        currentRow += horizontal[moveNumber];
        currentColumn += vertical[moveNumber];
        counter++;
        board[currentRow][currentColumn] = counter;
    }
}