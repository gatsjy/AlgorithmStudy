#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

   int i, n, res = -2147000000, cnt = 1;

   scanf("%d", &n);
   
   vector<int> v(n + 1);

   for (i = 0; i < n; i++) {
      scanf("%d", &v[i]);
   }

   for (i = 1; i < n; i++) {
      if (v[i - 1] <= v[i]) {
         cnt++;
         res = max(cnt, res);
      }
      else {
         cnt = 1;
      }
   }

   printf("%d", res);
}