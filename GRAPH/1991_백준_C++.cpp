#include <iostream>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int map[25][25];
bool ch[25][25];

int n;
dfs(int y, int x) {
	if (ch[y][x] == 1 || map[y][x] == 0) return;
	ch[y][x] = 1;
	for (int i = 0; i < n; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		if (xx > 0 && xx < n && yy >0 && yy < n) {
			dfs(yy, xx);
		}
	}
}

int main() {
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			if (ch[i][j] == 0 && map[i][j] == 1) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;
}