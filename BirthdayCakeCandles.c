#include <stdio.h>

int main() {
    long int ca[1000000], n, i, j, max, count = 0;

    // Input the number of elements in the array (n).
    scanf("%ld", &n);

    // Input the elements of the array.
    for (i = 0; i < n; i++) {
        scanf("%ld", &ca[i]);
    }

    // Find the maximum value in the array.
    max = ca[0];
    for (i = 0; i < n; i++) {
        if (max < ca[i]) {
            max = ca[i];
        }
    }

    // Count the occurrences of the maximum value in the array.
    for (i = 0; i < n; i++) {
        if (ca[i] == max) {
            count += 1;
        }
    }

    // Output the count of occurrences of the maximum value.
    printf("%ld", count);

    return 0;
}
