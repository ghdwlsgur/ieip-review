/*
구조체
배열이 자료의 형과 크기가 동일한 변수의 모임이라면 구조체는 자료의 종류가 다른 변수의 모임이라고 할 수 있다.
예를 들어 이름, 직위, 급여 등의 필드가 필요한 사원 자료를 하나의 단위로 관리하려면 문자와 숫자가 혼용되므로
배열로는 처리할 수 없다.  이런 경우 구조체를 사용하면 간단하게 처리할 수 있다.

Java에서의 클래스와 같은 개념이다.
*/

#include <stdio.h>
struct jsu
{
  char name[12];
  int os, db, hab, hhab;
};

int main()
{
  struct jsu st[3] = {{"데이터1", 95, 88}, {"데이터2", 84, 91}, {"데이터3", 86, 75}};
  //                          p                 p + 1              p + 2
  //                   p->os, p->db (p+1)->os, (p+1)->db (p+2)->os, (p+2)->db

  struct jsu *p;
  p = &st[0]; // {"데이터1", 95, 88}의 주소값
  printf("p.name = %s\n", p->name);
  printf("(p+1).name = %s\n", (p + 1)->name);
  printf("(p+2).name = %s\n", (p + 2)->name);
  printf("p.os = %d, p.db = %d\n", p->os, p->db);
  printf("(p+1).os = %d, (p+1).db = %d\n", (p + 1)->os, (p + 1)->db);
  printf("(p+2).os = %d, (p+2).db = %d\n", (p + 2)->os, (p + 2)->db);
  (p + 1)->hab = (p + 1)->os + (p + 2)->db;     // (p + 1)->hab = 84 + 75 = 159
  (p + 1)->hhab = (p + 1)->hab + p->os + p->db; // (p + 1)->hhab = 159 + 95 + 88 = 342
  printf("%d", (p + 1)->hab + (p + 1)->hhab);   // 159 + 342 = 501
}