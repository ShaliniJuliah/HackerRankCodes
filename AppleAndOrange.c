#include <stdio.h>

int main() {
    long int s, t, a, b, m, n, apl[100000], org[100000], d, i, j, atemp, btemp, ac = 0, oc = 0;

    // Input the left and right limits of the range (s and t).
    scanf("%ld %ld", &s, &t);

    // Input the positions of the apple tree (a) and orange tree (b).
    scanf("%ld %ld", &a, &b);

    // Input the number of apples (m) and oranges (n).
    scanf("%ld %ld", &m, &n);

    // Input the distances at which each apple falls from the tree.
    for (i = 0; i < m; i++) {
        scanf("%ld", &apl[i]);
    }

    // Input the distances at which each orange falls from the tree.
    for (i = 0; i < n; i++) {
        scanf("%ld", &org[i]);
    }

    // Calculate the number of apples that fall within the range [s, t].
    for (i = 0; i < m; i++) {
        atemp = 0;
        atemp = a + apl[i];
        if (atemp >= s && atemp <= t) {
            ac += 1;
            continue;
        } else {
            continue;
        }
    }

    // Print the number of apples that fall within the range [s, t].
    printf("%ld\n", ac);

    // Calculate the number of oranges that fall within the range [s, t].
    for (j = 0; j < n; j++) {
        btemp = 0;
        btemp = b + org[j];
        if (btemp >= s && btemp <= t) {
            oc += 1;
            continue;
        } else {
            continue;
        }
    }

    // Print the number of oranges that fall within the range [s, t].
    printf("%ld", oc);

    return 0;
}
