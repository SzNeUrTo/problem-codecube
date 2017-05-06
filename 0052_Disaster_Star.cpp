#include <cstdio>
#include <cmath>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  for (int i = -n / 2; i <= n / 2; i++) {
    for (int j = -n / 2; j <= n / 2; j++) {
      if (fabs(i) + fabs(j) <= n / 2) {
        printf("*");
      } else {
        printf("-");
      }
    }
    printf("\n");
  }
  return 0;
}
