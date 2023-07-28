#include <stdio.h>

int main() {
    int x1, v1, x2, v2, i, str1 = 0, sum1, str2 = 0, sum2, flag = 0;

    // Input the initial positions and speeds of the two objects.
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    // Calculate the initial positions after the first jump.
    str1 = x1 + v1;
    sum1 = str1;
    str2 = x2 + v2;
    sum2 = str2;

    // Simulate the movement of the objects and check if they meet.
    for (i = 0; i < 10000; i++) {
        if (sum1 == sum2) {
            flag = 1;
            printf("YES");
            break;
        } else {
            // If they haven't met yet, continue moving them.
            sum1 += v1;
            sum2 += v2;
            continue;
        }
    }

    // If the objects don't meet after the maximum number of iterations, print "NO".
    if (flag == 0) {
        printf("NO");
    }

    return 0;
}
