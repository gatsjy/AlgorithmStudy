#include <iostream>
#include <vector>

using namespace std;

vector<int> a[1000001];
bool visit[1000001];
int parent[1000001];

void dfs(int v) {
	// 방문체크
	visit[v] = true;
	for (int i = 0; i < a[v].size(); i++) {
		int next = a[v][i];
		if (!visit[next]) {
			parent[next] = v;
			dfs(next);
		}
	}
}
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int ina, inb;
		cin >> ina >> inb;
		a[ina].push_back(inb);
		a[inb].push_back(ina);
	}

	dfs(1);
	for (int i = 2; i <= n; i++) {
		printf("%d\n", parent[i]);
	}
}