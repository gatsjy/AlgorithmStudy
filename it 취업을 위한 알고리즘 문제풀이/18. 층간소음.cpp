#include <stdio.h>

int a[101];

int main() {
   
   int n, m;
   
   scanf("%d %d", &n, &m);
   
   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }

   int max = -2147000000;
   int cnt = 0;

   for (int i = 0; i < n; i++) {
      if (a[i] > m) {
         cnt++;
         if (cnt > max) {
            max = cnt;
         }
      }
      else {
         cnt = 0;
      }
   }

   printf("%d", max);
}