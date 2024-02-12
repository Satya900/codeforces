#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        // Calculate the remainder when 'a' is divided by 'b'
        int remainder = a % b;

        // If remainder is non-zero, calculate the number of moves needed
        int moves = (remainder == 0) ? 0 : b - remainder;

        printf("%d\n", moves);
    }

    return 0;
}
