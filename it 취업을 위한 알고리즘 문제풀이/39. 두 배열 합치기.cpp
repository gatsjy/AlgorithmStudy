#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int n, m;
	
	// 1. 합쳐질 배열
	vector<int> mergev;

	// 2. 첫번째 배열 삽입
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		mergev.push_back(input);
	}

	// 3. 두번째 배열 삽입
	cin >> m;
	for (int i = 0; i < m; i++) {
		int input;
		cin >> input;
		mergev.push_back(input);
	}

	// 4. 정렬
	sort(mergev.begin(), mergev.end());

	for (int i = 0; i < mergev.size(); i++) {
		cout << mergev[i] << " ";
	}
}