#include <stdio.h>

using namespace std;

int main() {

   int n;

   scanf("%d", &n);
   
   while (n--) {
      int input, res;
      scanf("%d %d", &input, &res);

      int cnt = (input + 1)*input / 2;
      if (res == cnt) {
         printf("YES");
      }else{
         printf("NO");
      }
      printf("\n");
   }
}