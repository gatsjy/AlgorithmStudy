#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

	string s;

	cin >> s;

	// 2진법을 8진법으로 변환하려면 3줄씩 끊으면 된다. 자릿수 맞춰주려고 0을 삽입
	while (s.size() % 3 != 0) {
		s.insert(s.begin(), '0');
	}
	
	// 맞는 자리수에 따라서 값을 넣어 준다.
	for (int i = 0; i < s.size(); i += 3) {
		int sum = 0;
		if (s[i] == '1') sum += 4;
		if (s[i + 1] == '1') sum += 2;
		if (s[i + 2] == '1') sum += 1;
		cout << sum;
	}

	
}