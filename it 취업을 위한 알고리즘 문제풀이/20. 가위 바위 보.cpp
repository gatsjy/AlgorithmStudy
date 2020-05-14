#include <stdio.h>

// 1 가위 2 바위 3 보
int a[101];
int b[101];
int main() {
   int n;
   scanf("%d", &n);

   for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
   }
   for (int i = 0; i < n; i++) {
      scanf("%d", &b[i]);
   }
   for(int i = 0 ; i < n ; i++) {
      if (a[i] == b[i]) {
         printf("D\n");
      }
      else if (a[i] == 3 && b[i] == 1) {
         printf("B\n");
      }
      else if (a[i] == 1 && b[i] == 3) {
         printf("A\n");
      }
      else if (a[i] > b[i]) {
         printf("A\n");
      }
      else {
         printf("B\n");
      }
   }
}