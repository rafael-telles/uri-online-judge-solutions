#include <stdio.h>

int main() {
    int i;
    double N[100], n;
    scanf("%lf", &n);
    for(i=0; i < 100; i++) {
        N[i]=n;
        printf("N[%d] = %.4lf\n", i, N[i]);
        n /= 2;
    }
    return 0;
}