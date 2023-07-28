#include <stdio.h>

int main() {
    long int a, i, n, scores[10000], max[10000], min[10000], min_c = 0, max_c = 0;

    // Input the number of scores (n).
    scanf("%ld", &n);

    // Input the array of scores.
    for (i = 0; i < n; i++) {
        scanf("%ld", &scores[i]);
    }

    // Initialize the first element as both min and max.
    a = scores[0];
    max[0] = a;
    min[0] = a;

    // Iterate through the array and count the number of times min and max change.
    for (i = 1; i < n; i++) {
        if (scores[i] < min[i - 1]) {
            // If the current score is less than the previous min, update min and keep max unchanged.
            min[i] = scores[i];
            max[i] = max[i - 1];
            min_c++;
        } else if (scores[i] > max[i - 1]) {
            // If the current score is greater than the previous max, update max and keep min unchanged.
            max[i] = scores[i];
            min[i] = min[i - 1];
            max_c++;
        } else {
            // If the current score is between the previous min and max, keep both min and max unchanged.
            min[i] = min[i - 1];
            max[i] = max[i - 1];
        }
    }

    // Output the counts of changes in min and max.
    printf("%ld %ld", max_c, min_c);

    return 0;
}
