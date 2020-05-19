#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main() {

	int sosu[1001] = { 0, };

	int n;

	scanf("%d", &n);
	int i, j;
	for (i = 2; i <= n/2; i++) {
		for (j = i+i; j <= n; j = j + i) {
			sosu[j] = 1;
		}
	}

	vector<int> v;
	for (int i = 2; i <= n; i++) {
		if (sosu[i] == 0) {
			v.push_back(i);
		}
	}

	int res[1001] = { 0, };

	for (int i = 2; i <= n; i++) {
		int tmp = i;
		for (int j = 0; j < v.size(); j++) {
			while (tmp % v[j] == 0) {
				res[v[j]]++;
				tmp = tmp / v[j];
			}
		}
	}

	printf("%d! = ", n);
	for (int i = 0; i < 1001; i++) {
		if (res[i] > 0) {
			printf("%d ", res[i]);
		}
	}
}