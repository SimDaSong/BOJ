/*
	�� ��� - 8

	�� ���� Ǯ �� �ִ� ����� ������ ã�ƺ���
*/

#include <iostream>

int main() {
	int n;

	scanf("%d", &n);

	// n���� ��
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) printf("*");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--) {
		for (j = 1; j <= i; j++) printf("*");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = i+1; j <= n; j++) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
}