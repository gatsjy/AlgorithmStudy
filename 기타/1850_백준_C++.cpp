﻿#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
	if (a%b == 0) return b;
	return gcd(b, a % b);
}

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long a, b;
	cin >> a >> b;

	long long result = gcd(a, b);
	//cout << result;
	for (int i = 0; i < result; i++) {
		cout << 1;
	}
	cout << "\n";
}