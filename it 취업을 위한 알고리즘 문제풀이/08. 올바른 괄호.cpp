#include <stdio.h>
#include <stack>

using namespace std;

int main() {
	stack<char> st;

	char c[31];

	scanf("%s", &c);

	int i;

	bool flag = true;
	
	for (i = 0; c[i] != '\0'; i++) {
		if (c[0] == ')') {
			flag = false;
			break;
		}
		else {
			if (c[i] == '(') {
				st.push('(');
			}
			else {
				if (!st.empty()) {
					st.pop();
				}
				else {
					flag = false;
					break;
				}
			}
		}
	}

	if (st.empty() && flag) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}