#include <stdio.h>

using namespace std;

char a[101];

int main() {
   scanf("%s", &a);

   int ccnt = 0;
   int hcnt = 0;

   bool flag = true;
   for (int i = 1; a[i] != '\0'; i++) {
      if (a[i] == 'H') {
         flag = false;
      }
      else {
         if (flag) {
            ccnt = ccnt * 10 + a[i] - '0';
         }
         else {
            hcnt = hcnt * 10 + a[i] - '0';
         }
      }
   }
   if (ccnt == 0) ccnt = 1;
   if (hcnt == 0) hcnt = 1;
   printf("%d", 12 * ccnt + hcnt);

}