#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int a, b;
  bool c, d;
  a = 10;
  b = 0;
  a *= b = 5; // a = a * b
  // a = 50
  // c = true
  // d = false
  c = (a != b);
  d = (a == b);
  printf("%d, %d, %d\n", a, c, d);
  printf("a = %d\n", a);
  printf("b = %d\n", b);
}