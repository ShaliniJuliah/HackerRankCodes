#include <stdio.h>

int main() {
    int n, grade[100], i, b;

    // Input the number of grades (n).
    scanf("%d", &n);

    // Input the grades into the grade array.
    for (i = 0; i < n; i++) {
        scanf("%d", &grade[i]);
    }

    // Apply the rounding rule to each grade.
    for (i = 0; i < n; i++) {
        if (grade[i] >= 38) {
            // Calculate the next multiple of 5.
            b = (grade[i] / 5 + 1) * 5;

            // If the difference between the next multiple of 5 and the grade is less than 3, round up.
            if (b - grade[i] < 3) {
                grade[i] = b;
            }
        }
    }

    // Output the rounded grades.
    for (i = 0; i < n; i++) {
        printf("%d\n", grade[i]);
    }

    return 0;
}
