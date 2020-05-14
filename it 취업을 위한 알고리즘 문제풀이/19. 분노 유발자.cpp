#include <stdio.h>
int a[101];
int main() {
   int n;
   scanf("%d", &n);

   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }
   int cnt = 0;
   for (int i = 0; i < n-1; i++) {
      for (int j = i+1; j < n; j++) {
         if (a[i] <= a[j]) {
            break;
         }
         if (j == n - 1) {
            //printf("%d ", a[i]);
            cnt++;
         }
      }
   }

   printf("%d", cnt);
}