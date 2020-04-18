#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stack>

using namespace std;

int ch[26];
int ch2[26];

int main() {
	
	string s;
	string s2;

	cin >> s >> s2;

	for (int i = 0; i < s.size(); i++) {
		ch[s[i] - 'a']++;
	}

	for (int i = 0; i < s2.size(); i++) {
		ch2[s2[i] - 'a']++;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		cnt += abs(ch[i] - ch2[i]);
	}

	cout << cnt;
}