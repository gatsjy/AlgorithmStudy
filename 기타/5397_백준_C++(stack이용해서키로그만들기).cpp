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

		stack<char> pass;
		stack<char> tmppass;
		
		cin >> s;

		int idx = 0;
		
		for (int i = 0; s[i] != '\0'; i++) {
			if (s[i] == '<') {
				if (!pass.empty()) {
					tmppass.push(pass.top());
					pass.pop();
				}
			}
			else if (s[i] == '>'){
				if (!tmppass.empty()) {
					pass.push(tmppass.top());
					tmppass.pop();
				}
			}
			else if (s[i] == '-') {
				if (!pass.empty()) {
					pass.pop();
				}
			}
			else {
				pass.push(s[i]);
			}
		}

		while (!tmppass.empty()) {
			pass.push(tmppass.top());
			tmppass.pop();
		}

		string result = "";
		while(!pass.empty()){
			result.push_back(pass.top());
			pass.pop();
		}

		reverse(result.begin(), result.end());
		cout << result << endl;
	}
}