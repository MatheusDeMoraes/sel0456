#include <stdio.h>

int main (void) {
  
  int n; int i;
  float x1 = 0;
  float x2 = 1;
  float phi;
  
  float xn;
  float xm = x2;
  float xl = x1;
  
  scanf("%d", &n);
  
  if (n > 50) {
    return 1;  
  }
  
  printf("%.0f\n%.0f\n",x1,x2);
  
  for (i = 0;i < n-2;i++) {
    xn = xl + xm;
    phi = xn/xm;
    printf("%.0f\t\t%f\n",xn,phi);
    xl = xm;
    xm = xn;
  } 

  return 0;
}
