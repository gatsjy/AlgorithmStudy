#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, money;

	scanf("%d %d", &n, &money);

	vector<int> v(n + 1);
	for (int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	sort(v.begin(), v.end());

	int cnt = 0;

	for(int i = n ; i > 0; i--) {
		if (money / v[i] > 0) {
			cnt += money / v[i];
			money = money % v[i];
		}
	}

	printf("%d", cnt);
}