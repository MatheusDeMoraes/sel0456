#include <stdio.h>

// Programa em c que fornece n
// primeiros termos da sequencia de
// fibonacci com função recursiva

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
  
  // Variaveis
  int n;
  int x;
  int i;
  
  scanf("%d", &n);
  // scanf recebe um valor inteiro para
  // variavel n, e o programa imprime os
  // n primeiros termos da sequencia de
  // fibonacci
  
  if (n > 30) {
    return 1;
  }
  
  for (i = 1; i <= n; i++) {
    x = phi(i);
    printf("%d\n",x);
  }

  return 0;
}
