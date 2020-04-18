#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>

using namespace std;

int sarr[26];
int nsarr[26];

// 11328/백준/C++
// write by gatsjy
int main() {

	int n;

	cin >> n;

	while (n--) {

		// 체크배열 초기화
		memset(sarr, 0, sizeof(sarr));
		memset(nsarr, 0, sizeof(nsarr));

		string s;
		string ns;

		cin >> s >> ns;

		for (int i = 0; s[i] != '\0'; i++) {
			sarr[s[i] - 'a']++;
			nsarr[ns[i] - 'a']++;
		}

		bool flag = true;
		// checking
		for (int i = 0; i < 26; i++) {
			if (sarr[i] != nsarr[i]) {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << "Possible" << endl;
		}
		else {
			cout << "Impossible" << endl;
		}
		
	}
}