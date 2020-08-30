#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, m;

	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) cin >> b[i];

	vector<int> merge;
	int aidx = 0;
	int bidx = 0;

	// 1. 일단 한번 돌리기
	while (aidx < n && bidx < m) {
		if (a[aidx] > b[bidx]) {
			merge.push_back(b[bidx++]);
		}
		else {
			merge.push_back(a[aidx++]);
		}
	}

	// 2. a나머지 처리
	while (aidx < n) {
		merge.push_back(a[aidx++]);
	}

	// 3. b나머지 처리
	while (bidx < m) {
		merge.push_back(b[bidx++]);
	}

	for (int i = 0; i < merge.size(); i++) {
		printf("%d ", merge[i]);
	}
}