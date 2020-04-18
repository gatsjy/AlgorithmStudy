#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stack>

using namespace std;

int map[50][50];
bool ch[50][50];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		// 초기화 1
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				map[i][j] = 0;
			}
		}

		// 초기화 2
		memset(ch, false, sizeof(ch));

		for (int i = 0; i < k; i++) {
			int x, y;
			cin >> x >> y;
			map[x][y] = 1;
		}

		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				
				if (map[i][j] == 0 || ch[i][j] == 1) continue;
				queue<pair<int, int>> q;
				q.push({ i,j });
				ch[i][j] = 1;
				cnt++;
				
				while (!q.empty()) {
					auto cur = q.front();
					q.pop();
					for (int i = 0; i < 4; i++) {
						int xx = cur.first + dx[i];
						int yy = cur.second + dy[i];
						if (map[xx][yy] == 0 || ch[xx][yy] == 1) continue;
						if (xx < 0 || xx >= n || yy < 0 || yy >= m) continue;
						q.push({ xx,yy });
						ch[xx][yy] = 1;
					}
				}
			}
		}

		cout << cnt << endl;
	}
}