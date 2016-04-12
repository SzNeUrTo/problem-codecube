#include <cstdio>

#define MAX_N 1000
int n;
int l[MAX_N];
int pass = 0;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &l[i]);
	}

	for (int i = 0; i < n; i++) {
		bool isSwap = false;
		for (int j = i+1; j < n; j++) {
			if (l[i] > l[j]) {
				swap(&l[i], &l[j]);
				isSwap = true;
			}
			else {
				break;
			}
		}
		if (!isSwap) pass++;
	}
	printf("%d\n", pass);
}
