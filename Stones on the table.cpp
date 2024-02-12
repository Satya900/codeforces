#include <stdio.h>

int min_moves_to_different_colors(int n, char *s) {
    int moves = 0;

    for (int i = 1; i < n; i++) {
        
        if (s[i] == s[i - 1]) {
            moves++;
        }
    }

    return moves;
}

int main() {
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    int result = min_moves_to_different_colors(n, s);
    printf("%d\n", result);

    return 0;
}
