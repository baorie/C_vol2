#include <stdio.h>
/* write a program to copy its input to its output, replacing each string of one or more blanks by a single blank */
int main(){
  int c;
  int pb = 0; //past blank

  while((c = getchar()) != EOF){
    if(c == ' ' && pb == 0){
      pb = 1;
      putchar(c);
    }
    if(c != ' '){
      pb = 0;
      putchar(c);
    }
  }
}
