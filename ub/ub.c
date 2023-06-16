//newline
#define concat(s1) #s1
#define chr() キ

#include <stdio.h>
#include <stdlib.h>

//int mainn()
int main() {
  printf(concat(\u1111));
  char キ = 'c';
  char c = chr();
  printf(c + キ);
  void *p1=malloc(11);
  free(p1);
  void *p2 = p1 + 1;
  int p3 = ((int*)p1);
  printf(p3);
  printf(p2);
  int a;
  int b = a + a;
  printf(b);
  return 0;
}
int end;
