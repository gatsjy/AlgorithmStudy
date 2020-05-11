#include <stdio.h>
#include <vector>

using namespace std;

/*
written by Gatsjy
*/
int n, m; 

vector<int> v; 
vector<bool> ch; // 지나온 곳을 체크하는 곳

void solution() {
	if (v.size() == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", v[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (ch[i] == 0) {
			ch[i] = 1;
			v.push_back(i);
			solution();
			ch[i] = 0;
			v.pop_back();
		}
	}

}

int main() {
	scanf("%d %d", &n, &m);

	ch = vector<bool>(n + 1);
	
	solution();
}