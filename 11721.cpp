/*
	https://www.acmicpc.net/problem/11721
	�� ���� ���� ����ϱ�
	���
*/

#include <iostream>

int main() {
	char ch[101]; // ���ڿ�

	// ���ڿ� �Է� �ޱ�
	scanf("%s", ch);

	for (int i = 0, count = 0; ch[i]; i++, count++) {
		if (count == 10) { count = 0; printf("\n"); }
		printf("%c", ch[i]); // ���� ����� ���� %d �ƴ�
	}
}