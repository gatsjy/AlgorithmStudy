#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int i, n;
	
	scanf("%d", &n);

	vector<int> a(n+1);
	vector<int> b(n + 1);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 1; i < n; i++) {
		if (abs(a[i] - a[i - 1]) <= 1000) {
			b[abs(a[i] - a[i - 1])]++;
		}
	}

	bool flag = true;
	for (int i = 1; i < n; i++) {
		if (b[i] != 1) {
			flag = false;
			break;
		}
	}

	if (flag) {
		printf("YES");
	}
	else {
		printf("NO");
	}

}