#include <stdio.h>

int isDistinct(int year) {
    int digit[10] = {0};

    while (year > 0) {
        int lastDigit = year % 10;

        if (digit[lastDigit] == 1) {
            return 0; // Not distinct
        }

        digit[lastDigit] = 1;
        year /= 10;
    }

    return 1; // All digits are distinct
}

int findNextDistinctYear(int y) {
    while (1) {
        y++;

        if (isDistinct(y)) {
            return y;
        }
    }
}

int main() {
    int year;
    scanf("%d", &year);

    int result = findNextDistinctYear(year);
    printf("%d\n", result);

    return 0;
}
