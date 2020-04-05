#include <iostream>
#include <string>

using namespace std;

int main() {

	// 427 100/010/111
	// 327  11/010/111
	// 372 011/111/010
	string ch[8] = { "000","001","010","011","100","101","110","111" };

	string s;

	cin >> s;

	// 0 예외처리합니다.
	if (s == "0") {
		cout << 0;
		return 0;
	}

	// 알맞는 수에 대해서 string 값 만들어주기
	string result = "";
	for (int i = 0; i < s.size(); i++) {
		 result += ch[s[i]-48];
	}

	// 맨앞에 0이 나올경우를 대비해서 앞자리 제거해주는 작업
	while (1) {
		if (result[0] == '0') {
			result.erase(result.begin());
		}
		else {
			break;
		}
	}
	cout << result;
}