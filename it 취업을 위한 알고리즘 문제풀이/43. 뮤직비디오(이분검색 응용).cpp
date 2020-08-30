#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Distribution(vector<int>& v, int target) {
	int cnt = 1;
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		if (sum + v[i] <= target) {
			sum +=v[i];
		}
		else {
			cnt++;
			sum = 0;
			i--;
		}
	}

	return cnt;
}

int main() {

	int n, m;

	cin >> n >> m;

	vector<int> v(n);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}

	// 1. 첫번째, 1에서 전체 넣을 수 있는 비디오의 길이에서 이분검색으로 가능한 최소길이를 찾기 시작
	int lidx = 1;
	int ridx = sum;
	int mid = sum / 2;
	int res = 2147000000;

	// 2. 결정 알고리즘 시작탱
	while (lidx <= ridx) {
		if (Distribution(v, mid) <= m) {
			res = min(mid, res);
			ridx = mid - 1;
		}
		else {
			lidx = mid + 1;
		}
		mid = (lidx + ridx) / 2;
	}

	printf("%d", res);
}