#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stack>

using namespace std;

int main() {

	int n;

	cin >> n;

	while (n--) {
		string s;
		cin >> s;

		stack<char> stack;
		bool flag = true;
		for (int i = 0; i < s.size(); i++) {
			if (!stack.empty()) {
				if (s[i] == ')') {
					if (stack.top() == '(') {
						stack.pop();
					}
					else {
						flag = false;
						break;
					}
				}
				else {
					stack.push('(');
				}
			}
			else {
				if (s[i] == ')') {
					flag = false;
					break;
				}
				else {
					stack.push('(');
				}
			}
		}

		if (stack.empty()) {
			if (flag) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "NO" << endl;
		}
	}
}