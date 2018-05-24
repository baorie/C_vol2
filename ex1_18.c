#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

/* Write a program to remove trailing blanks and tabs from
  each line of input, and to delete entirely blank lines*/

int main(){
  //read each line (check for input)
  int c, pb, pt, pn; // pb = pastBlank, pt = pastTab, pn = pastNewLine
  pb = pt = pn = 0;
  while(((c = getchar()) != EOF)){
    if(c == ' ' && c != '\t' && pb == 0){
      pb++;
      putchar(c);
    } else if (c == ' ' && c != '\t' && pb != 0){
      pb++;
    } else if (c == '\t' && c != ' ' && pt == 0){
      //if a tab is next to a tab replace it with just one tab
      pt++;
      putchar(c);
    } else if (c == '\t' && c != ' ' && pt != 0){
      pt++;
    } else if (c == '\n' && pn == 0){
      pn++;
      putchar(c);
    } else if (c == '\n' && pn != 0){
      pn++;
    } else if (c != '\t' && c != ' '){
      pb = 0;
      pt = 0;
      putchar(c);
    }
  }
}
