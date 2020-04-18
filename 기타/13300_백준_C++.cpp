#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>

using namespace std;

int room[7][2];
int roomcnt = 0;
int n, k;

// 13300/백준/C++
// written by Gatsjy
int main() {
	// n : 참가학생수 , k : 한방 최대 인원 수
	// 0 : 여학생 , 1 : 남학생
	cin >> n >> k;

	while (n--) {
		int s, y;
		cin >> s >> y;
		room[y][s]++;
	}

	for (int i = 1; i < 7; i++) {
		for (int j = 0; j < 2; j++) {
			if (room[i][j] % k == 0) {
				roomcnt += room[i][j] / k;
			}
			else {
				roomcnt += room[i][j] / k + 1;
			}
		}
	}

	cout << roomcnt;
}