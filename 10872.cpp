/*
	���丮��
*/

#include <iostream>

int main() {
	int n;
	unsigned long fact = 1; // unsigned int�� �ȵǴ���

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	printf("%d", fact);
}