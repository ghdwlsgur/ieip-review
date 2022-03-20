#include <stdio.h>

int main(void)
{
  struct insa
  {
    char name[10]; // 10byte 할당
    int age;       // 4byte 할당 (영문, 숫자 1byte / 한글 2byte)
  } a[] = {"Kim", 28, "Lee", 38, "Park", 42, "Choi", 31};

  /*
  p name[10]                                        age
  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10byte |    | 1 | 2 | 3 | 4 |
  | K | i | m |                                     | 2 | 8 |

  p + 1 name[10]                                    age
  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10byte |    | 1 | 2 | 3 | 4 |
  | L | e | e |                                     | 3 | 8 |

  p + 2 name[10]                                    age
  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10byte |    | 1 | 2 | 3 | 4 |
  | P | a | r | k |                                 | 4 | 2 |

  p + 3 name[10]                                    age
  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10byte |    | 1 | 2 | 3 | 4 |
  | C | h | o | i |                                 | 3 | 1 |
  */

  struct insa *p;
  p = a;
  printf("0번째 name: %s\n", p->name);
  printf("0번째 age: %d\n", p->age);
  p++;

  printf("1번째 name: %s\n", p->name);
  printf("1번째 age: %d\n", p->age);
}