#include <stdio.h>

int main() {
    int n, k, i, j, count = 0, ar[100];

    // Input the number of elements (n) and the value of k.
    scanf("%d", &n);
    scanf("%d", &k);

    // Input the elements of the array.
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    // Iterate through all pairs of elements and count the pairs whose sum is divisible by k.
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            int c = ar[i] + ar[j];
            if (c % k == 0) {
                count += 1;
            }
        }
    }

    // Output the count of pairs whose sum is divisible by k.
    printf("%d", count);

    return 0;
}
