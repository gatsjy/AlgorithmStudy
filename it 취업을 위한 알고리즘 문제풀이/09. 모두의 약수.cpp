#include <stdio.h>

using namespace std;

int a[500001];

int main() {

	int n;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j = j+i) {
			a[j] += 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", a[i]);
	}
}