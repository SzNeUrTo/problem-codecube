#include <cstdio>
#include <string>

using namespace std;
#define MAX_N 100000
char SPACEBAR[] = "SPACEBAR";
char SHIFT[] = "SHIFT";
char word[MAX_N];
int n;

bool isMatchKey(char targetKey, char checkKey) {
  return targetKey == checkKey;
}

bool isMatchKeys(char* targetWord, char* checkWord) {
  int i = 0;
  while (*checkWord != '\0') {
    if (*targetWord != *checkWord) return false;
    targetWord++;
    checkWord++;
  }
  return true;
}

int countGameKeys() {
  int count = 0;
  for (int i = 0; i < n; i++) {
    // printf("%c %d", word[i], i);
    if (isMatchKey(word[i], 'Q')) count++;
    else if (isMatchKey(word[i], 'W')) count++;
    else if (isMatchKey(word[i], 'E')) count++;
    else if (isMatchKey(word[i], 'A')) count++;
    else if (isMatchKey(word[i], 'D')) count++;
    else if (isMatchKey(word[i], 'V')) count++;
    else if (isMatchKey(word[i], 'S')) {
      bool isSpacebar = isMatchKeys(&word[i], SPACEBAR);
      bool isShift = isMatchKeys(&word[i], SHIFT);
      if (isSpacebar) i += 8 - 1;
      if (isShift) i += 5 - 1;
      count++;
    }
    // printf(" %d\n", i);
  }
  return count;
}

int main() {
	scanf("%d", &n);
  scanf("%s", word);
  printf("%d\n", countGameKeys());
  return 0;
}
