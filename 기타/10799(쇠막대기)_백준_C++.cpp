#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stack>

using namespace std;

// 10799/백준/C++
// written by Gatyjy
// 레이저를 쏘는 당시에 stack의 사이즈를 확인해서 그만큼의 막대기가 추가된다.
// 하나의 막대기가 끝나는 시점에는 하나의 막대기가 생긴다(연결이 끊어지기 때문에)
int main() {

	string s;
	cin >> s;

	stack<char> stack;
	bool flag = true;

	int cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (!stack.empty()) {
			if (s[i] == ')') {
				if (stack.top() == '(') {
					if (s[i - 1] == '(') {
						stack.pop();
						cnt += stack.size();
					}
					else {
						stack.pop();
						cnt += 1;
					}
				}
				else {
					stack.pop();
					cnt += 1;
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

	cout << cnt;
}