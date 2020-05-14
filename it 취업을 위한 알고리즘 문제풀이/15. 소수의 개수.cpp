#include <stdio.h>

using namespace std;

bool a[200001];

int main() {

   int n;
   
   scanf("%d", &n);

   for (int i = 2; i <= (n / 2); i++) {
      for (int j = i + i; j <= n; j = i + j) {
         a[j] = 1;
      }
   }
   int cnt = 0;
   for (int i = 2; i <= n; i++) {
      if (!a[i]) cnt++;
   }
   printf("%d", cnt);
}