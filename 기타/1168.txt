#include <stdio.h>
#include <vector>

using namespace std;

/*
2. 어떻게 풀어야 할까...
- 말로 풀어낸 작업을 한단계 업 시킬수 있다.
- 내가 for문으로 구현해 낸것을 erase라는 vector의 함수를 통해 구현?
- size에 대한 문제도 간단한 수식으로 구현 -> 내가 부족한 부분이 이거다. 간단하게 수식으로 구현할 수 있는데도 멀리 돌아간다...
*/
int main() {

	int n, k;

	vector<int> v;
	vector<int> result;

	scanf("%d %d", &n, &k);

	int idx = 0;

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	while (!v.empty()) {
		idx = (idx + k - 1) % v.size();
		result.push_back(v[idx]);
		v.erase(v.begin() + idx);
	}

	printf("<%d", result[0]);
	for (int i = 1; i < result.size(); i++) {
		printf(", %d", result[i]);
	}
	printf(">");
}