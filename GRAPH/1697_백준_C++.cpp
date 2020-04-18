#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#define loc first
#define level second

const int MAX = 100000 + 1;

bool ch[MAX];


int FindBro(int n, int k) {
	queue<pair<int, int>> q;

	q.push({ n,0 });
	ch[n] = 1;

	while (!q.empty()) {
		auto cur = q.front();
		q.pop();

		if (cur.first == k) return cur.second;

		if (cur.first + 1 < MAX && ch[cur.first + 1] == 0) {
			q.push({ cur.first + 1, cur.second + 1 });
			ch[cur.first + 1] = 1;
		}

		if (cur.first -1 >= 0 && ch[cur.first - 1] == 0) {
			q.push({ cur.first - 1, cur.second + 1 });
			ch[cur.first - 1] = 1;
		}

		if (cur.first * 2 < MAX && ch[cur.first * 2] == 0) {
			q.push({ cur.first * 2, cur.second + 1 });
			ch[cur.first * 2] = 1;
		}
	}
}
int main() {

	int n, k;

	cin >> n >> k;

	cout << FindBro(n, k);
}