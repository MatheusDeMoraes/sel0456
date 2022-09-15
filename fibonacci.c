#include <stdio.h>

int main (void){

  int n;

  // A variavel xn sera o numero de posicao n na
  // sequencia de Fibonacci. Os dois primeiros
  // numeros sao definidos como x1 = 0, x2 = 1.
  int xn = 0;
  int x1 = 0;
  int x2 = 1;
  int i;

  scanf("%d", &n);

  if (n >= 0) {
    printf("Numero nao valido\n");
  }

  if (n == 1) {
    xn = x1;
  }

  if (n == 2) {
    xn = x2;
  }

  if (n >= 3) {
    for (i = 3; i <= n; i++){
      xn = x1 + x2;
      x1 = x2;
      x2 = xn;
    }
  }

  printf("\n%d", xn);



    return 0;
}
