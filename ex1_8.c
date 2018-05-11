#include <stdio.h>
/* write a program to count blanks, tabs, and newlines */

int main(){
  int c;
  double nb = 0; //blank count
  double nt = 0; //tab count
  double nl = 0; //line count

  while((c = getchar()) != EOF) {
    if(c == '\n'){
      ++nl;
    }
    if(c == '\t'){
      ++nt;
    }
    if(c == ' '){
      ++nb;
    }
  }
  printf("There are %.0f blanks, %.0f tabs, and %.0f lines.\n", nb, nt, nl);
  /* CTRL D FOR END OF FILE */
}
