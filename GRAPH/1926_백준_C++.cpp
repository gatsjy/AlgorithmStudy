#include <iostream>
#include <queue>

using namespace std;

int map[500][500];
bool ch[500][500];

int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	int cnt = 0;
	int maxsize = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0 || ch[i][j] == 1) continue;
			cnt++;
			queue<pair<int, int>> q;
			q.push({ i,j });
			ch[i][j] = 1;
			int size = 0;
			while (!q.empty()) {
				auto cur = q.front();
				q.pop();
				size++;
				for (int i = 0; i < 4; i++) {
					int xx = cur.first + dx[i];
					int yy = cur.second + dy[i];
					if (xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
					if (map[xx][yy] == 0 || ch[xx][yy] == 1) continue;
					q.push({ xx,yy });
					ch[xx][yy] = 1;
				}
			}
			maxsize = max(maxsize, size);
		}
	}

	cout << cnt << "\n" << maxsize;
}