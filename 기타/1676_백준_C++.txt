#include <stdio.h>

long long min(long long a, long long b) {
	return a > b ? b : a;
}

// 2의 개수를 구하는 공식
long long countTwo(long long a) {
	long long two = 0;
	for (long long i = 2; i <= a; i *= 2) {
		two += a / i;
	}
	return two;
}

// 5의 개수를 구하는 공식
long long countFive(long long a) {
	long long five = 0;
	for (long long i = 5; i <= a; i *= 5) {
		five += a / i;
	}
	return five;
}

int main() {
	
	long long n;

	scanf("%lld", &n);

	int a = min(countTwo(n), countFive(n));

	printf("%d", a);
}