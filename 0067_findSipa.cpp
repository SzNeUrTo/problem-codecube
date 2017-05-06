#include <cstdio>

char s[1001];
int main() {
  scanf("%s", s);
  char* c = &s[0];
  int count = 0;
  while (*c != '\0') {
    if (*c == 'S' || *c == 's') {
      if (*(c+1) == 'I' || *(c+1) == 'i') {
        if (*(c+2) == 'P' || *(c+2) == 'p') {
          if (*(c+3) == 'A' || *(c+3) == 'a') {
            count++;
            printf("\"%c%c%c%c\"", *c, *(c+1), *(c+2), *(c+3));
            c += 4;
            continue;
          }
        }
      }
    }
    printf("%c", *c);
    c++;
  }
  printf("\n");
  printf("%d\n", count);
  return 0;
}
