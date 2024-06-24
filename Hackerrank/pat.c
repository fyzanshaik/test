#include <stdio.h>

void printPattern(int n)
{
    int size = n * 2 - 1; // Size of the pattern
    int matrix[size][size]; // 2D matrix to store the pattern

    int startRow = 0, endRow = size - 1; // Variables to track the current row boundaries
    int startCol = 0, endCol = size - 1; // Variables to track the current column boundaries

    int num = n; // Starting number

    // Filling the matrix with numbers
    while (startRow <= endRow && startCol <= endCol)
    {
        // Filling the top row
        for (int i = startCol; i <= endCol; i++)
            matrix[startRow][i] = num;

        // Filling the right column
        for (int i = startRow + 1; i <= endRow; i++)
            matrix[i][endCol] = num;

        // Filling the bottom row
        for (int i = endCol - 1; i >= startCol; i--)
            matrix[endRow][i] = num;

        // Filling the left column
        for (int i = endRow - 1; i > startRow; i--)
            matrix[i][startCol] = num;

        // Updating boundaries and the number
        startRow++;
        endRow--;
        startCol++;
        endCol--;
        num--;
    }

    // Printing the pattern
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 4; // Number of rows and columns
    printPattern(n);

    return 0;
}
