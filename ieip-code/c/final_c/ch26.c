#include <stdio.h>

int main(void)
{
  int a = 2, b = 3, c = 4, d, e;
  d = a & b & ~b;
  // a = 0010
  // b = 0011
  // ~b = 1100
  // b & ~b = 0000
  // d = 0
  e = a | b & c;
  // a = 0010
  // b = 0011
  // c = 0100
  // b & c = 0000
  // e = 2
  printf("%d %d", d, e);
}