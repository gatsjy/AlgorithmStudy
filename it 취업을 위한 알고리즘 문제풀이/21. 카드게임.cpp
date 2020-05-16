#include <stdio.h>

int a[10];
int b[10];
int scorea = 0;
int scoreb = 0;
char lstwin = 'D';

int main() {

	for (int i = 0; i < 10; i++) {
		int input;
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++) {
		int input;
		scanf("%d", &b[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (a[i] == b[i]) {
			scorea += 1;
			scoreb += 1;
		}
		else if (a[i] > b[i]) {
			scorea += 3;
			lstwin = 'A';
		}
		else {
			scoreb += 3;
			lstwin = 'B';
		}
	}

	printf("%d %d\n", scorea, scoreb);
	if (scorea == scoreb) {
		if (lstwin != 'D') {
			printf("%c", lstwin);
		}
		else {
			printf("D");
		}
	}
	else if (scorea > scoreb) {
		printf("A");
	}
	else {
		printf("B");
	}

}