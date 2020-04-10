#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>

using namespace std;

stack<int> s;

void d(int x) {
	if (x == 0) return;
	else {
		s.push(x % 2);
		d(x / 2);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	d(n);

	int rst = 0;
	int two = 1;

	while (!s.empty()) {
		rst += s.top() * two;
		two = two * 2;
		s.pop();
	}
	cout << rst;
	return 0;
}