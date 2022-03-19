#include <stdio.h>

int main(void)
{
  int *array[3];
  int a = 12, b = 24, c = 36;
  array[0] = &a; // a의 주소값 참조
  array[1] = &b; // b의 주소값 참조
  array[2] = &c; // c의 주소값 참조

  printf("a = %d\n", *array[0]);
  printf("b = %d\n", *array[1]);
  printf("c = %d\n", *array[2]);
  printf("**array = %d\n", **array);
  printf("b + **array = %d", *array[1] + **array + 1);
}