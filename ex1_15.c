#include <stdio.h>
/* Rewrite the temperature conversion using a function
  Prints Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
double ftc(int f);
int main(){
  printf("fahr\tcelsius\n");
  int i;
  i = 0;
  for(i = 0; i < 300; i = i + 20){
    printf("%3d %6.1f\n", i, ftc(i));
  }
}

double ftc(int fahr){
  //calculate fahr to celsius
  double c;
  c = (5.0/9.0)*(fahr-32.0);
  return c;
}
