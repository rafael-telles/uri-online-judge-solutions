#include <stdio.h>
int main() {
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        if (b<a) {
                int aux = b;
                b = a;
                a = aux;
        }
        while(a++ < b) {
                if (a % 5 == 2 || a % 5 == 3) {
                        printf("%d\n", a);
                }
        }
        return 0;
}