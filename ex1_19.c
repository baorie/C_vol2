#include <stdio.h>
#define MAXLINE 1000
/* Write a function reverse(s) that reverses the character string 's'
  Use it to write a program that reverses its input line by line
*/

void reverse(char to[], char from[]);

int main() {
  int c;
  int i = 0;
  char temp[MAXLINE];
  char perm[MAXLINE];
  while ((c = getchar()) != EOF) {
    if(c != '\n'){
      temp[i] = c;
    } else {
      i++;
    }
    reverse(perm, temp);
    printf("%s\n", perm);
  }
  return 0;
}

void reverse(char to[], char from[]){
  int i, j, k, charcount;
  i = j = k = charcount= 0;
  while(from[i] != '\0'){
    charcount++;
    i++;
  }
  k = charcount-1;
  while((to[j] = from[k]) != '\0'){
    i++;
    k--;
  }
}
