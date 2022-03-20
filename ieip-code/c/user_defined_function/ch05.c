#include <stdio.h>
func(int *p)
{
  printf("%d\n", *p);
  printf("%d\n", p[2]);
}

int main(void)
{
  int a[7] = {1, 2, 3, 4, 5};
  func(a);
  func(a + 2);
}