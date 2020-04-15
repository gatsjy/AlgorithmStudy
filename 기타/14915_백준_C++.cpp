#include <iostream>

using namespace std;

// 진수변환 재귀적 방법으로 해결
void d(int x, int j) {
	if (x == 0) return;
	else {
		d(x / j, j);
		if (x % j > 9) {
			printf("%c", x % j + 55);
		}
		else {
			printf("%d", x % j);
		}
	}
}


int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	if (n == 0) {
		printf("%d", 0);
	}
	else {
		d(n, m);
	}
}