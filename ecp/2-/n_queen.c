#include <stdio.h>
#define N 8

int board[N][N];

/* Check if a queen can be placed on board[row][col] */
int isSafe(int row, int col) {
    int i, j;

    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;

    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;

    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return 0;

    return 1;
}

/* A recursive utility function to solve N
   Queen problem */
int solveNQUtil(int col) {
    /* base case: If all queens are placed
      then return true */
    if (col >= N)
        return 1;

    /* Consider this column and try placing
       this queen in all rows one by one */
    for (int row = 0; row < N; row++) {
        /* Check if the queen can be placed on
          board[row][col] */
        if (isSafe(row, col)) {
            /* Place this queen in board[row][col] */
            board[row][col] = 1;

            /* recur to place rest of the queens */
            if (solveNQUtil(col + 1))
                return 1;

            /* If placing queen in board[row][col
               doesn't lead to a solution then
               remove queen from board[row][col] */
            board[row][col] = 0;
        }
    }

    /* If the queen can not be placed in any row in
        this column col then return false */
    return 0;
}

/* This function solves the N Queen problem using
   Backtracking. It mainly uses solveNQUtil() to
   solve the problem. It returns false if queens
   cannot be placed, otherwise, it returns true and
   prints the placement of queens in the form of 1s.
   Please note that there may be more than one
   solutions, this function prints one of the
   feasible solutions.*/
void solveNQ() {
    if (solveNQUtil(0) == 0) {
        printf("Solution does not exist");
        return;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}

/* Driver program to test above functions */
int main() {
    solveNQ();
    return 0;
}
