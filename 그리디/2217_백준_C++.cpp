#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {

	int n;

	scanf("%d", &n);
	vector<int> v(n);

	for (int i = 0; i < n; i++) scanf("%d", &v[i]);

	// 1. ���� �������� ����
	sort(v.begin(), v.end(), greater<int>());

	// 2. �ִ밪 ���ϱ�
	long long res = -2147000000;
	for (int i = 0; i < n; i++) {
		long long sum = v[i] * (i + 1);
		if (sum > res) res = sum;
	}

	printf("%lld", res);
}