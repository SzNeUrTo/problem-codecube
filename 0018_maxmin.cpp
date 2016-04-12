#include <cstdio>

long max(long a, long b) {
	if (a > b) return a;
	return b;
}
long min(long a, long b) {
	if (a < b) return a;
	return b;
}
int main() {
	long n;
	scanf("%ld", &n);
	long maxValue, minValue;
	for (long i = 0; i < n; i++) {
		long k;
		scanf("%ld", &k);
		if (i == 0) {
			maxValue = k;
			minValue = k;
		}
		else {
			maxValue = max(maxValue, k);
			minValue = min(minValue, k);
		}
	}
	printf("%ld\n", maxValue);
	printf("%ld\n", minValue);
	return 0;
}
