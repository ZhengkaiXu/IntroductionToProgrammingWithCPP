#include <iostream>
using namespace std;

const int NUMBER_OF_QUEENS = 8; // Constant: eight queens
int queens[NUMBER_OF_QUEENS];

// check whether a queen can be placed at row i and column j
bool isValid(int row, int column) {
    for (int i = 1; i <= row; i++) {
        if (queens[row - i] == column // Check column
        || queens[row - i] == column - i // Check upper left diagonal
        || queens[row - i] == column + i) { // Check upper right diagonal
            return false; // There is a conflict
        }
    }
    return true; // No conflict
}

// Display the chessboard with eight queens
void printResult() {
    cout << "\n----------------------------------\n";
    for (int row = 0; row < NUMBER_OF_QUEENS; row++) {
        for (int column = 0; column < NUMBER_OF_QUEENS; column++) {
            printf(column == queens[row] ? "| Q " : "|   ");
        }
        cout << "|\n-----------------------------------\n";
    }
}

// Search to place a queen at the specified row
bool search(int row) {
    if (row == NUMBER_OF_QUEENS) { // Stopping condition
        return true; // A solution found to place 8 queens in 8 rows
    }

    for (int column = 0; column < NUMBER_OF_QUEENS; column++) {
        queens[row] = column; // Place a queen at (row, column)
        if (isValid(row, column) && search(row + 1)) {
            return true; // Found, thus return true to exit for loop
        }
    }

    // No solution for a queen placed at any column of this row
    return false;
}

int main() {
    search(0); // Start search from row 0. Note row indices are 0 to 7
    printResult(); // Display result

    return 0;
}