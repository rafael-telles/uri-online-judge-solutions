#include <stdio.h>
int main() {
        int c;
        scanf("%d", &c);

        long double a,b;
        while(c-- > 0) {
                scanf("%Lf", &a);
                scanf("%Lf", &b);
                if (b == 0) {
                        printf("divisao impossivel\n");
                } else {
                        printf("%.1Lf\n", a/b);
                }
        }

        return 0;
}
