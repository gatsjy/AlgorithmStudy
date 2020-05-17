#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

   int i, n;
   
   scanf("%d", &n);

   vector<int> v(n + 1);

   for (i = 0; i < n; i++) {
      scanf("%d", &v[i]);
   }

   for (int i = 0; i < n; i++) {
      int cnt = 1;
      for (int j = 0; j < n; j++) {
         if (v[i] < v[j])cnt++;
      }
      printf("%d ", cnt);
   }

}