#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	cin >> s;
	char sex;
	int age = (s[0] - 48) * 10 + s[1] - 48;

	if (s[7] - 48 == 1 || s[7] - 48 == 3) {
		sex = 'M';
	}
	else {
		sex = 'W';
	}

	if (s[7] - 48 == 3 || s[7] - 48 == 4) {
		age = 20 - age;
	}
	else {
		age = 100 - age + 20;
	}
	printf("%d %c", age, sex);
	
}