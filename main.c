#include <stdio.h>

int main() {
  char ch = '\0';

  for (; ;) {
    scanf("%c", &ch);

    printf("%c", ch);

    if (ch == '\0') {
      break;
    }
  }

  return 0;
}
