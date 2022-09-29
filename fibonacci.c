#include <stdio.h>

int main (void) {
  
  // Variáveis
  int i; int n;
  
  // x1 e x2: primeiros numeros da
  // sequencia de fibonacci, 0 e 1
  int x1 = 0;
  int x2 = 1;

  int xn;
  int xl = x1;
  int xm = x2;

  scanf("%d", &n);
  // scanf recebe um valor inteiro para
  // variavel n, e o programa imprime os
  // n primeiros termos da sequencia de
  // fibonacci
  
  if (n <= 0 || n > 50) {
    return 1;
  }
  
  // se n for muito grande, zero ou
  // negativo o programa sai com return 1;
  
  printf("\n%d\n",x1);
  printf("%d\n",x2);

  for (i = 0; i < n-2; i++) {
    xn = xl + xm;
    printf("%d\n",xn);
    xl = xm;
    xm =  xn;
  }

  return 0;
}
