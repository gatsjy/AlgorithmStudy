#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> cnt(n);
	vector<int> ans(n);

	// 앞에 있는 숫자 담은 cnt 배열
	for (int i = 0; i < n; i++) {
		cin >> cnt[i];
	}

	for (int i = 1; i <= n; i++) {
		int count = cnt[i-1];
		if (count == 0) {
			for (int j = 0; j < n; j++) {
				if (ans[j] == 0) {
					ans[j] = i;
					break;
				}
			}
		}
		else {
			for (int j = 0; j < n; j++) {
				if (ans[j] == 0) {
					count--;
				}
				if (count == -1 && ans[j] == 0) {
					ans[j] = i;
					break;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}


}