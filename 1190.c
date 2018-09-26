#include <stdio.h>

int main() {
    int size = 12;
    double s = 0.0, m;
    double M[size][size];
    char O[2];
    int x, y, c=0;
    
    scanf("%s", &O);
    
    for(x = 0; x < size; x++) {
        for(y = 0; y < size; y++) {
            scanf("%lf", &M[x][y]);
        }
    }
    
    for(x = 0; x < size; x++) {
        for(y = 0; y < size; y++) {
            if (x < y && (size - x - 1) < y) {
                s += M[x][y];
                c++;
            }
        }
    }
    
    if(O[0] == 'S') {
        printf("%.1lf\n", s);
    } else if(O[0] == 'M') {
        m = s / c;
        printf("%.1lf\n", m);
    }
    return 0;
}
