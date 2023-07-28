#include <stdio.h>

#define MAX_SIZE 1000000

int main() {
    int n;
    scanf("%d", &n);

    // Declare an array to hold frequency counts of elements.
    int ar[MAX_SIZE] = {0};

    // Input the elements and update the frequency count.
    for (int i = 0; i < n; i++) {
        int element;
        scanf("%d", &element);
        ar[element]++;
    }

    // Find the element with the highest frequency.
    int maxCount = 0;
    int maxCountElement = 0;

    for (int i = 0; i < MAX_SIZE; i++) {
        if (ar[i] > maxCount) {
            maxCount = ar[i];
            maxCountElement = i;
        }
    }

    // Output the element with the highest frequency.
    printf("%d", maxCountElement);

    return 0;
}
