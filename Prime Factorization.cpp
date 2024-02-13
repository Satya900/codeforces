#include <stdio.h>

void prime_factorization(int n) {
    int divisor = 2;

    while (n > 1) {
        if (n % divisor == 0) {
            printf("%d", divisor);
            n /= divisor;

            while (n % divisor == 0) {
                printf("*%d", divisor);
                n /= divisor;
            }
            if (n > 1) {
                printf("*");
            }
        }
        divisor++;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    prime_factorization(n);

    return 0;
}
