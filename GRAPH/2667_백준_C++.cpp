#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
string map[25];
bool ch[25][25];
int cnt;
vector<int> home;

int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };

void dfs(int x, int y) {
	if (map[x][y] == '0' || ch[x][y]) return;
	ch[x][y] = 1;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx >= 0 && xx < n && yy >= 0 && yy < n) {
			dfs(xx, yy);
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] != '0' && !ch[i][j]) {
				dfs(i, j);
				home.push_back(cnt);
				cnt = 0;
			}
		}
	}

	sort(home.begin(), home.end());

	cout << home.size() << endl;
	for (int i = 0; i < home.size(); i++) {
		cout << home[i] << endl;
	}
}