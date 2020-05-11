#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

	int n, i, a, max = -2147000000, min = 2147000000;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		cin>>a;
		if (a > max) max = a;
		if (a < min) min = a;
	} 

	printf("%d", max - min);
}