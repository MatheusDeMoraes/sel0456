#include <stdio.h>

int phi(int n) {
  if (n == 1) {
    return 0;
  }
  if (n == 2) {
    return 1;
  }
  if (n >= 3) {
    return phi(n-1) + phi(n-2);
  }
}

int main (void) {
  
  // Variáveis
  int i; int n;
  int xn;
  
  scanf("%d", &n);
  // scanf recebe um valor inteiro para
  // variavel n, e o programa imprime os
  // n primeiros termos da sequencia de
  // fibonacci
  
  if (n <= 0 || n > 50) {
    return 1;
  }
  
  // se n for <= 0 ou muito grande
  // o programa se encerra com return 1;

  for (i = 1; i <= n; i++) {
    xn = phi(i);
    printf("%d\n",xn);
  }

  return 0;
}
