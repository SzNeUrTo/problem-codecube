#include <cstdio>
#include <cmath>

using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("error\n");
	}
	else {
		int bound = n/2;
		for (int i = -bound; i <= bound; i++) {
			for (int j = -bound; j <= bound; j++) {
				if (fabs(i) >= fabs(j)) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
