#include <stdio.h>
#include <string.h>

int main()
{
  int k, n;
  char st[] = "I am Tom!";
  char temp;
  n = strlen(st); // 9
  n--;
  // 8 ~ 7, 6, 5, 4, 3, 2, 1
  for (k = 0; k < n; k++)
  {
    temp = *(st + k);
    *(st + k) = *(st + n);
    *(st + n) = temp;
    n--;
  }
  printf("%s\n", st); // !moT ma I
}