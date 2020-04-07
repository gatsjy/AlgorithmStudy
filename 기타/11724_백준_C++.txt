#include <iostream>

using namespace std;

int a[1001][1001] = { 0, };
int visit[1001] = { 0 };

int n, m;

// dfs 함수시작. 시작 v는 방문으로 체크하고 그에 맞는 간선들을 체크해서 모든 부분의 방문을 시작합니다.
// 방문을 하기 위해서는 연결이 되어있으면서 아직 방문하지 않는 곳을 방문
void dfs(int v) {
	visit[v] = 1;

	for (int i = 1; i <= n; i++) {
		if (a[v][i] == 1 && visit[i]==0) {
			dfs(i);
		}
	}
}
int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int input, input2;
		cin >> input >> input2;
		a[input][input2] = 1;
		a[input2][input] = 1;
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 0) { // 일단 방문을 하지 않았다면 dfs를 통해 방문시작
			dfs(i);
			cnt++;
		}
	}

	cout << cnt;
}