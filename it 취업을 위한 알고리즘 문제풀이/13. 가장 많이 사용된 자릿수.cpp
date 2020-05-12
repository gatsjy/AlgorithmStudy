#include <stdio.h>

using namespace std;
char a[101];
int cnt[10];

int main() {

	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++) {
		cnt[a[i] - 48] ++;
	}

	int max = -2147000000;
	int idx = 0;

	for (int i = 0; i < 10; i++) {
		if (cnt[i] >= max) {
			max = cnt[i];
			idx = i;
		}
	}

	printf("%d", idx);
	
}