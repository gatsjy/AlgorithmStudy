#include <iostream>

using namespace std;

int tree[26][2];

// 전위순회 : 루트 노드를 먼저
void pre(int v) {
	if (v == -1)return;
	printf("%c", v + 'A');
	pre(tree[v][0]);
	pre(tree[v][1]);
}

// 중위순회 : 루트 노드를 중간
void in(int v) {
	if (v == -1)return;
	in(tree[v][0]);
	printf("%c", v + 'A');
	in(tree[v][1]);
}

// 후위순회 : 루트 노드를 마지막에
void post(int v) {
	if (v == -1)return;
	post(tree[v][0]);
	post(tree[v][1]);
	printf("%c", v + 'A');
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char root, left, right;
		cin >> root >> left >> right;

		// 왼쪽 넣기
		tree[root - 'A'][0] = left != '.' ? left - 'A' : -1;
		// 오른쪽 넣기
		tree[root - 'A'][1] = right != '.' ? right - 'A' : -1;
	}

	pre(0);
	printf("\n");
	in(0);
	printf("\n");
	post(0);
}