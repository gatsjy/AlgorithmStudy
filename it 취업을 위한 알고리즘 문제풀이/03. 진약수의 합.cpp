#include <stdio.h>

int main() {

	int n, m;

	scanf("%d", &n);

	int res = 0;
	for (int i = 1; i < n ; i++) {
		if (n % i == 0) {
			if (i != 1) {
				printf("+");
			}
			printf("%d ", i);
			res += i;
		}
	}
	printf("= %d", res);
}