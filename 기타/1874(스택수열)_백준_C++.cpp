#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

stack<int> st;
vector<char> v;
int a[100001];
int main() {
	
	int n;

	cin >> n;

	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	int idx = 0;
	
	for (int i = 1; i <= n; i++) {
		st.push(i);
		v.push_back('+');
		while (!st.empty() && st.top() == a[idx]) {
			st.pop();
			v.push_back('-');
			idx++;
		}
	}

	if (st.empty()) {
		for (char c : v) {
			printf("%c\n", c);
		}
	}
	else {
		printf("NO");
	}
	
	
}