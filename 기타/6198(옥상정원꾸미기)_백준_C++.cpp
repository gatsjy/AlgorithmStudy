#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> tower;
stack<pair<int,int>> st;
int main(){

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		tower.push_back(input);
	}

	reverse(tower.begin(), tower.end());

	st.push({ 0, tower[0] });
	long long rsv = 0;
	for (int i = 1; i < n; i++) {
		if (!st.empty()) {
			int cnt = 0;
			while (!st.empty() && st.top().second < tower[i]) {
				auto cur = st.top();
				st.pop();
				cnt += cur.first+1;
			}
			st.push({ cnt, tower[i] });
			rsv += cnt;
		}
		else {
			st.push({ 0,tower[i] });
		}
	}

	cout << rsv;
}