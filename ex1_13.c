#include <stdio.h>

/* Write a program to print a histogram of the lengths of
  words in its input. It is easy to draw a histogram with the bars
  horizontal */
#define IN 1
#define OUT 0

int main() {
  int c, i, state;
  int hist[10]; //only takes 10 lengths
  state = OUT;
  for(i = 0; i < 10; i++){
    hist[i] = 0;
  }

  //find the length of each word in the input
  //make an array of lengths
  //make a histogram
  i = 0;
  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
      ++i;
    } else if (state == OUT) {
      state = IN;
      ++hist[i];
    } else if (state == IN){
      ++hist[i];
    }
  }

  printf("hist = ");
  for(i = 0; i < 10; ++i){
    printf(" %d", hist[i]);
  }
  printf("\n");

  //make a histogram

}
