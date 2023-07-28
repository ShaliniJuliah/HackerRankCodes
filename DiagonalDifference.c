#include <stdio.h>
#include <stdlib.h> // Include the necessary header for the abs() function.

int main() {
    int arr[100][100], i, j, n, x, sum1 = 0, sum2 = 0, diff;

    // Input the value of n (matrix size).
    scanf("%d", &n);

    // Input the elements of the matrix.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate the sum of elements along the secondary diagonal.
    i = 0, j = n - 1;
    while (i < n) {
        sum1 += arr[i][j];
        i++;
        j--;
    }

    // Calculate the sum of elements along the main diagonal.
    i = 0;
    while (i < n) {
        sum2 += arr[i][i];
        i++;
    }

    // Calculate the absolute difference between the two diagonal sums.
    diff = sum1 - sum2;
    x = abs(diff); // Using abs() function to get the absolute value.

    // Output the result.
    printf("%d", x);

    return 0;
}
