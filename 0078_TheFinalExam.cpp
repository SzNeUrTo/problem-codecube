#include <cstdio>

int main() {
	int pointA;
	scanf("%d", &pointA);
	int point[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf(" %d", &point[i]);
		sum += point[i];
	}
	for (int i = 0; i < 5; i++) {
		if (pointA == sum - point[i]) {
			sum -= point[i];
			point[i] = 0;
			break;
		}
	}
	if (sum == pointA) {
		for (int i = 0; i < 5; i++) {
			printf("%d ", point[i]);
		}
	}
	else {
		printf("%d", -1);
	}
	printf("\n");
	return 0;
}
