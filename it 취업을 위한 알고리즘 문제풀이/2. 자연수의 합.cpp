#include <stdio.h>

int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	int res = 0;
	for (int i = n; i <= m; i++) {
		if (i != n) {
			printf("+");
		}
		printf("%d ", i);
		res += i;
	}
	printf("= %d", res);
}