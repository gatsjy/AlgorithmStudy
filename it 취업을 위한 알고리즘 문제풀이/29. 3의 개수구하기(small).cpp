#include <stdio.h>

int main(){

  int n;

  scanf("%d", &n);

  int three = 0;

  for(int i = 1; i <= n; i++){
    int tmp = i;
    while(tmp > 0){
      if(tmp%10==3){
        three++;
      }
      tmp /= 10;
    }
  }

  printf("%d", three);
}