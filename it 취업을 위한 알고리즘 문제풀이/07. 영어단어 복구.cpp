#include <stdio.h>

using namespace std;

int main() {
	char a[101];
	char b[101];
	int i, idx = 0;

	gets_s(a);

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] == ' ') {
			continue;
		}
		if (a[i] >= 'A' && a[i] <= 'Z') {
			b[idx++] = a[i] + 32;
		}
		else {
			b[idx++] = a[i];
		}
	}

	b[idx] = '\0';
	printf("%s", b);
}