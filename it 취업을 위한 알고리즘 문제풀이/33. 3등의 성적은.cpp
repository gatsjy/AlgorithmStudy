#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int tmp = 0;
	int idx = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] < v[j]) {
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}

	int first = v[0];
	for (int i = 0; i < v.size(); i++) {
		if (first > v[i]) {
			first = v[i];
			idx++;
		}
		if (idx == 2) {
			cout << v[i];
			break;
		}
	}
}