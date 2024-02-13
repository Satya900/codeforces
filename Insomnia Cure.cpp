#include <stdio.h>

int main() {
    int k, l, m, n, d;
    scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);

    int damaged_dragons = 0;

    for (int dragon = 1; dragon <= d; dragon++) {
        if (dragon % k == 0 || dragon % l == 0 || dragon % m == 0 || dragon % n == 0) {
            damaged_dragons++;
        }
    }

    printf("%d\n", damaged_dragons);

    return 0;
}
