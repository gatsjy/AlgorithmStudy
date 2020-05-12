#include <stdio.h>

using namespace std;

int main() {

	int n, sum = 0, c = 1, d = 9, res = 0;

	scanf("%d", &n);

	// 이 생각을 해낼 줄 알아야 실력이 는다.                                                                                                                             
	while (sum + d < n) {
		res = res + (c * d);
		sum = sum + d;
		c++;
		d *= 10;
	}

	res = res +((n - sum) * c);
	printf("%d", res);
}