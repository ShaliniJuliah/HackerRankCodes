#include <stdio.h>

int main() {
    int arr[100], n;
    float pos = 0, neg = 0, zero = 0;

    // Input the value of n (number of elements in the array).
    scanf("%d", &n);

    // Input the elements of the array.
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count the number of positive, negative, and zero elements in the array.
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos += 1;
        else if (arr[i] < 0)
            neg += 1;
        else
            zero += 1;
    }

    // Calculate and print the fraction of positive, negative, and zero elements in the array.
    printf("%0.6f\n%0.6f\n%0.6f", pos / n, neg / n, zero / n);

    return 0;
}
