#include <stdio.h>

using namespace std;
int a[101];
int n;
int reverse(int i) {
	int res = 0;
	while (i > 0) {
		res = res * 10 + i % 10;
		i /= 10;
	}
	return res;
}

bool isPrime(int n) {
	if (n == 1) return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		int tmp = reverse(a[i]);
		if (isPrime(tmp)) {
			printf("%d ", tmp);
		}
	}
	
}