#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>

using namespace std;

int dice[7];
int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int one, two, three;

	cin >> one >> two >> three;

	dice[one]++;
	dice[two]++;
	dice[three]++;

	int price = 0;
	int  i = 0;
	for (i = 1; i < 7; i++) {
		if (dice[i] == 1) {
			price = (price, 100 * i);
		}
		else if (dice[i] == 2) {
			price = 1000 + i * 100;
			break;
		}
		else if (dice[i] == 3) {
			price = 10000 + i * 1000;
			break;
		}
	}

	cout << price;

}