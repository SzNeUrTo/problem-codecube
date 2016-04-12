#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
vector<long> ab;
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 2*n; i++) {
		long k;
		scanf(" %ld", &k);
		ab.push_back(k);
	}
	sort(ab.begin(), ab.end());
	long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *(ab.begin()+n-1-i) * *(ab.begin()+i+n);
	}
	printf("%ld\n", sum);
	return 0;
}
