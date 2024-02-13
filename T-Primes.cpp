#include <stdio.h>
#include <math.h>

int is_t_prime(long long int num) {
    long long int root = sqrt(num);
    
    if (root * root == num && root > 1) {
        for (long long int i = 2; i <= sqrt(root); ++i) {
            if (root % i == 0) {
                return 0; 
            }
        }
        return 1;  
    }
    return 0;  
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i) {
        long long int x;
        scanf("%lld", &x);
        
        if (is_t_prime(x)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
