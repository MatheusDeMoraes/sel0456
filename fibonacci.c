#include <stdio.h>

int main (void) {

  int i; int n;
  int x1 = 0;
  int x2 = 1;

  int xn;
  int xl = x1;
  int xm = x2;

  scanf("%d", &n);
  printf("\n%d\n",x1);
  printf("%d\n",x2);

  for (i = 0; i < n; i++) {
    xn = xl + xm;
    printf("%d\n",xn);
    xl = xm;
    xm = xn;
  }

  return 0;
}
