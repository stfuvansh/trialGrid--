#include <stdio.h>
#include <stdlib.h>
int main() {
    char grid[5][5];
    for (int row=0; row<5; row++) {
        for (int col=0; col<5; col++) {
            if (row == 2 && col == 2) {
                grid[row][col] = 'R';
            } else {
                grid[row][col] = '.';
            }
        }
    }
    for (int row=0; row<5; row++) {
        for (int col=0; col<5; col++) {
            printf("%c", grid[row][col]);
        }
        printf("\n");
    }
    return 0;
}