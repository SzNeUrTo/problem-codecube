#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	int coor[n];
	for (int i = 0; i < n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		coor[i] = x + 10000*y;
	}
	int same = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (coor[i] == coor[j]) {
				same++;
			}
		}
	}
	printf("%d\n", n - same / 2);
	return 0;
}
