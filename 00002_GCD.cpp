#include <cstdio>

long gcd(long a, long b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	long a, b;
	scanf("%ld %ld", &a, &b);
	printf("%ld\n", gcd(a, b));
	return 0;
}
