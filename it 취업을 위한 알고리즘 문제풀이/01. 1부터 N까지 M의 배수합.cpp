#include <stdio.h>

int main() {

	int n, m;

	scanf("%d %d", &n, &m);

	int res = 0;
	for (int i = 1; i <= n; i++) {
		if (i % m == 0) {
			res += i;
		}
	}
	printf("%d", res);
}