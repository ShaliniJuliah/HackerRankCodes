#include <stdio.h>

int main() {
    long long int n, i, j, sum = 0, a = 1;
    long long int arr[5], ans[100], min, max; 

    // Input the values for the array arr.
    for (i = 1; i <= 5; i++) {
        scanf("%lld", &arr[i]);
    }
    
    // Calculate the sum of all elements in arr except the one at position a.
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j != a) {
                sum += arr[j];
            }
        }
        ans[i] = sum;
        sum = 0;
        a += 1;
    }

    // Find the minimum and maximum values from the ans array.
    min = max = ans[1];
    for (i = 1; i <= 5; i++) {
        if (min > ans[i])
            min = ans[i];   
        if (max < ans[i])
            max = ans[i];       
    }

    // Output the minimum and maximum values.
    printf("%lld %lld", min, max);
    
    return 0;
}
