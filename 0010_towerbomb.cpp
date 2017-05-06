#include <cstdio>
#include <cmath>

bool isPrime(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, b;
	scanf("%d", &n);
	scanf("%d", &b);
	int countPrime = 0;
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			countPrime++;
		}
	}
	int remainingBomb = countPrime - b;
	if (remainingBomb < 0) {
		printf("%d\n", 0);
	} else {
		printf("%d\n", remainingBomb);
	}
	return 0;
}
