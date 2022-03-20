#include <stdio.h>

int mp(int base, int exp)
{
  int res = 1;
  for (int i = 0; i < exp; i++)
  {
    res *= base; // 1 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2 = 2^10 = 1024
  }
  return res;
}

int main(void)
{
  int res = mp(2, 10);
  printf("%d", res);
}
