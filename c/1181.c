#include <stdio.h>

int main() {
    double s = 0.0, m;
    double M[12][12];
    char T[2];
    int L, x, y;
    
    scanf("%d", &L);
    scanf("%s", &T);
    
    for(x = 0; x < 12; x++) {
        for(y = 0; y < 12; y++) {
            scanf("%lf", &M[x][y]);
            if(x == L) {
                s += M[x][y];
            }
        }
    }
    if(T[0] == 'S') {
        printf("%.1lf\n", s);
    } else if(T[0] == 'M') {
        m = s / 12.0;
        printf("%.1lf\n", m);
    }
    return 0;
}