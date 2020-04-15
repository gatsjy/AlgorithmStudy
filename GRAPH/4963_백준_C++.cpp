#include <iostream>
#include <cstring>

int dx[8] = { -1,0,1,1,1,0,-1,-1 };
int dy[8] = { -1,-1,-1,0,1,1,1,0 };

using namespace std;

const int MAX = 50;

int w, h;
int map[MAX][MAX]; 
bool ch[MAX][MAX];

void dfs(int y, int x) {
	if (map[y][x] == 0 || ch[y][x] == 1) {
		return;
	}
	ch[y][x] = 1;
	for (int i = 0; i < 8; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx >= 0 && xx < w && yy >= 0 && yy < h) {
			dfs(yy, xx);
		}
	}
}
int main() {
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;

		memset(ch, false, sizeof(ch));

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		int cnt = 0;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (ch[i][j] == 0 && map[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}
}