#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int percentages[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &percentages[i]);
    }

    double total = 0;
    for (int i = 0; i < n; i++) {
        total += (double)percentages[i] / 100;
    }

    double weighted_average = (total / n) * 100;

    // Print the result with 12 decimal places
    printf("%.12lf\n", weighted_average);

    return 0;
}
