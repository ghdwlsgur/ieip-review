#include <stdio.h>
int factorial(int n);

// int main(void)
// {
//   int (*pf)(int);
//   pf = factorial;
//   printf("%d", pf(3));
// }

// int factorial(int n)
// {
//   if (n <= 1)
//     return 1;
//   else
//     return n * factorial(n - 1);
// }

int main(void)
{
  int (*pf)(int);                     // (*pf) -> 함수가 저장된 곳의 위치를 저장하는 함수 포인터의 이름, (int) -> 함수가 전달받을 인수의 자료형
  pf = factorial;                     // 함수의 시작 주소를 함수 포인터 pf에 저장한다.
  printf("%d\n", pf(3));              // 3 * 2 * 1 = 6
  printf("factorial(6) : %d", pf(6)); // 6 * 5 * 4 * 3 * 2 * 1 = 720
}

int factorial(int n)
{
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}