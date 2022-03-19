#include <stdio.h>

int main(void)
{
  int ary[3];
  int s = 0;
  *(ary + 0) = 1;
  ary[1] = *(ary + 0) + 2; // 3
  ary[2] = *ary + 3;       // 4
  printf("%d, %d, %d, %d\n", *(ary + 0), ary[0], ary[1], ary[2]);
  for (int i = 0; i < 3; i++)
  {
    s = s + ary[i];
  }
  printf("%d", s); // 8
}