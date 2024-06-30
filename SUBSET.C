#include <conio.h>
#include <stdio.h>

int s[10], x[10], d;

void sumofsubset(int m, int k, int r);

void main() {
    int n, sum = 0, i;
    clrscr();
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter set in increasing order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &s[i]);
    printf("Enter the value of D: ");
    scanf("%d", &d);

    for (i = 0; i < n; i++)
        sum = sum + s[i];

    if (sum < d || s[0] > d) {
        printf("\nNo subset found\n");
    } else {
        sumofsubset(0, 0, sum);
    }
    getch();
}

void sumofsubset(int m, int k, int r) {
    int i;
    x[k] = 1;

    if (m + s[k] == d) {
        printf("\nSubset:");
        for (i = 0; i <= k; i++) {
            if (x[i] == 1) {
                printf("\t%d", s[i]);
            }
        }
        printf("\n");
    } else if (m + s[k] + s[k + 1] <= d) {
        sumofsubset(m + s[k], k + 1, r - s[k]);
    }

    if (m + r - s[k] >= d && m + s[k + 1] <= d) {
        x[k] = 0;
        sumofsubset(m, k + 1, r - s[k]);
    }
}
