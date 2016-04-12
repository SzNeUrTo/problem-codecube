#include <cstdio>

long gcd(long a, long b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	int n;
	scanf("%d", &n);
	long h[n], gcdH;
	for (int i = 0; i < n; i++) {
		scanf("%ld", &h[i]);
		if (i == 0) gcdH = h[i];
		else gcdH = gcd(gcdH, h[i]);
	}
	long ans;
	for (int i = 0; i < n; i++) {
		ans += (h[i] / gcdH);
	}
	printf("%ld\n", ans);
	return 0;
}
