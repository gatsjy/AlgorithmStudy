#include <iostream>
#include <queue>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int map[101][101];
int ch[101][101];

int n, m;

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	ch[x][y] = 1;

	while (!q.empty()) {
		x = q.front().first;
		y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int xx = x + dx[i];
			int yy = y + dy[i];
			if (0 <= xx && 0 <= yy && n > xx && m > yy) {
				if (ch[xx][yy] == 0 && map[xx][yy] == 1) {
					q.push(make_pair(xx, yy));
					ch[xx][yy] = ch[x][y] + 1;
				}
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			map[i][j] = c - 48;
		}
	}
	bfs(0, 0);
	
	printf("%d", ch[n - 1][m - 1]);
}