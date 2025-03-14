#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    int num = 1;  // Start filling from 1
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    // Fill the matrix in spiral order
    while (top <= bottom && left <= right) {
        // Fill the top row (left to right)
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        // Fill the right column (top to bottom)
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Fill the bottom row (right to left)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        // Fill the left column (bottom to top)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    // Print the matrix
    printf("The spiral matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
