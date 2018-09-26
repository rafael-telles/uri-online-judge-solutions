#include <stdio.h>

long long fatorial_(int n, long long acc) {
    if (n <= 1) {
        return acc;
    }
    return fatorial_(n - 1, acc * n);
}

long long fatorial(int n) {
    return fatorial_(n, 1);
}

int main() {
    int a, b;
    
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%lld\n", fatorial(a) + fatorial(b));
    }
    
    return 0;
}
