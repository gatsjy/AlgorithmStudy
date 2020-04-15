#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int visit[1001] = { 0 };
int map[1001];
vector<vector<int>> vv;
int n, m;

void bfs(int v) {
	visit[v] = 1;
	queue<int> q;
	q.push(v);

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		
		for (int i = 0; i < vv[now].size(); i++) {
			int next = vv[now][i];
			if (!visit[next]) {
				q.push(next);
				visit[next] = 1;
			}
		}
	}
}
int main() {
	cin >> n >> m;
	vv.resize(n + 1); // 여기 중요
	for (int i = 0; i < m; i++) {
		int input, input2;
		cin >> input >> input2;
		vv[input].push_back(input2);
		vv[input2].push_back(input);
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 0) {
			bfs(i);
			cnt++;
		}
	}

	cout << cnt;
}