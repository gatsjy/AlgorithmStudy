#include <stdio.h>

using namespace std;

char a[101];
char b[101];

int na[60];
int nb[60];

int main() {
   scanf("%s", &a);
   scanf("%s", &b);

   for (int i = 0; a[i] != '\0'; i++) {
      na[a[i] - 65]++;
      nb[b[i] - 65]++;
   }

   bool flag = true;
   for (int i = 0; i < 60; i++) {
      if (na[i] != nb[i]) { flag = false; break;}
   }

   if (flag) {
      printf("YES");
   }
   else {
      printf("NO");
   }
}