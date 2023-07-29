#include <stdio.h>

int main() {
    int n, k, i, sum = 0, bill[1000000], b, a;

    // Input n and k
    scanf("%d %d", &n, &k);

    // Input the bill amounts and calculate the sum
    for (i = 0; i < n; i++) {
        scanf("%d", &bill[i]);
        sum += bill[i];
    }

    // Input the amount Anna paid and calculate the fair share
    scanf("%d", &b);
    a = (sum - bill[k]) / 2;

    // Check if the amount Anna paid is equal to the fair share and print the result
    if (a == b) {
        printf("Bon Appetit");
    } else {
        printf("%d", b - a);
    }

    return 0;
}
