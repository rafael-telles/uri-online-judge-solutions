#include <stdlib.h>

int main() {
	long long a;
	scanf("%lld", &a);

	long long i;
	for (i = 1; i <= a; i++) {
		printf("%lld %lld %lld\n", i, i*i, i*i*i);
	}
}