#include <cstdio>
#include <string>

using namespace std;
int mystrlen(char* st)
{
	int l = 0;
	char* p = st;
	while(*p != '\0') {
		p++;
		l++;
	}
	return l;
}
int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d %d", &n, &m);
	// for (int i = 0; i < n; i++) {
		char a[n+1];
		char b[m+1];
		scanf("%s", a);
		scanf("%s", b);
		int lenA = n;//mystrlen(a);
		int lenB = m;//mystrlen(b);
		//printf("a = %d\n", lenA);
		int start = 0;
		int counting = 0;
		while (start <= lenA - lenB) { 
			bool find = true;
			for (int j = 0; j < lenB; j++) {
				if (b[j] != a[start + j]) {
					find = false;
				}
			}
			if (find) counting++;
			start++;
		}
		printf("%d\n", counting);

	// }
	return 0;
}
