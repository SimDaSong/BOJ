/*
	https://www.acmicpc.net/problem/2577
	������ ����
*/

#include <iostream>

int main() {
	int a, b, c;
	unsigned long mult;
	int count[10] = { 0 }; // �� ���ڰ� �� �� �����°�

	scanf("%d %d %d", &a, &b, &c);
	mult = a * b * c;

	count[mult % 10 - 1]++; // ���� �ڸ�
	for (int i = 10;; i *= 10) {
		count[mult / i - 1]++;
		mult
	}
}