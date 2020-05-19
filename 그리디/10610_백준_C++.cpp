#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

string s;

int main() {
	cin >> s;

	vector<int> v;

	for (int i = 0; i < s.size(); i++) {
		v.push_back(s[i] - '0');
	}

	sort(v.begin(), v.end(), greater<int>());

	bool flag = true;

	if (v[v.size() - 1] != 0) {
		flag = false;
	}
	int sum = 0;
	
	for (int i = 0; i < v.size()-1; i++) {
		sum += v[i];
	}

	if (sum % 3 == 0 && flag) {
		for (int i = 0; i < v.size(); i++) {
			printf("%d", v[i]);
		}
	}
	else {
		printf("-1");
	}
}