#include <stdio.h>

int main() {
   int n, i, sum = 0;

   printf("Podaj liczbę liczb do zsumowania: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
      int x;
      printf("Podaj liczbę %d: ", i);
      scanf("%d", &x);
      sum += x;
   }

   printf("Suma wynosi: %d\n", sum);

   return 0;
}
