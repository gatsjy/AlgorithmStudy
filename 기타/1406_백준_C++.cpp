#include <iostream>
#include <string>
#include <list>

using namespace std;

string s;
list<char> l;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> s;

	for (char c : s) l.push_back(c);
	auto idx = l.end();
	
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		char c;

		cin >> c;

		if (c == 'P') {
			char c2;
			cin >> c2;
			l.insert(idx, c2);
		}
		else if (c == 'L') {
			if (idx != l.begin()) idx--;
		}
		else if (c == 'D') {
			if (idx != l.end()) idx++;
		}
		else if (c == 'B') {
			if (idx != l.begin()) {
				idx--;
				idx = l.erase(idx);
			}
		}
	}

	for (char c : l) cout << c;
}