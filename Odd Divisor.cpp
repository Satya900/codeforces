#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool hasOddDivisor(long long n) {
    if (n % 2 == 0) {
        return true; 
    }

    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return true; 
        }
    }

    return false; 
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        if (hasOddDivisor(n)) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}
