#include <stdio.h>

int main(void)
{
  int a = 12, b = 8, c = 2, d = 3;
  a /= b++ - c * d;
  /**
   * @brief
   * a = a / b++ - (c * d)
   * a = 12 / 8 - 6
   * a = 12 / 2
   * a = 6
   */
  printf("%d", a);
}