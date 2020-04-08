#include <iostream>
#include <cstring>

using namespace std;

int a[1001];
int visit[1001];

void dfs(int v){
	if (visit[v] == 1) return;
	visit[v] = 1;
	dfs(a[v]);
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int m;
		cin >> m;
		for (int i = 1; i <= m; i++) {
			cin >> a[i];
		}

		int cnt = 0;
		for (int i = 1; i <= m; i++) {
			if (visit[i] == 0) {
				dfs(i);
				cnt++;
			}
		}
		cout << cnt << endl;

		memset(a, 0, sizeof(a));
		memset(visit, 0, sizeof(visit));
	}
}