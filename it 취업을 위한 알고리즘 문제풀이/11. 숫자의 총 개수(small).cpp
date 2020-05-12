#include <stdio.h>

using namespace std;

int cntN(int n) {
	int res = 0;
	while (n > 0) {
		n /= 10;
		res++;
	}
	return res;
}
int main() {

	int cnt = 0;
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		cnt += cntN(i);
	}

	printf("%d", cnt);
}