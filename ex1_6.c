#include <stdio.h>

/* verify that the expression getchar() != EOF is 0 or 1 */
/* hint on UNIX systems EOF is Ctrl + D */
int main() {
  int temp = (getchar() != EOF);
  printf("getchar() != EOF is %d\n", temp);
}
