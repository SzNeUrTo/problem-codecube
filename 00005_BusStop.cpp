#include <cstdio>

long gcd(long a, long b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

long lcm(long a, long b) {
	return a * b / gcd(a, b);
}

int main() {
	int n;
	scanf("%d", &n);
	long wait;
	for (int i = 0; i < n; i++) {
		long t;
		scanf("%ld", &t);
		if (i == 0) wait = t;
		else wait = lcm(wait, t);
	}
	printf("%ld\n", wait);
	return 0;
}
