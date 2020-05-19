#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main() {

	int n;

	scanf("%d", &n);

	int two = 0;
	int five = 0;

	for (int i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp % 2 == 0) {
			two += 1;
			tmp /= 2;
		}

		while (tmp % 5 == 0) {
			five += 1;
			tmp /= 5;
		}
	}

	printf("%d", min(two, five));
}