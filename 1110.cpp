/*
	https://www.acmicpc.net/problem/1110
	���ϱ� ����Ŭ

	�迭�� �Ϸ��� �߾��µ� �����̾���
*/

#include <iostream>

int main() {
	int n, new_n; // �Է� ���� ������ ���ο� ��
	int cycle = 0; // ����Ŭ�� ����
	
	// ���� �Է� �ޱ�
	scanf("%d", &n);

	// ���ο� �� �����
	new_n = n;
	do {
		new_n = (new_n % 10) * 10 + (((new_n / 10) + (new_n % 10)) % 10); // (���� �ڸ� ��)*10 + (���� �ڸ� ��)
																		  // new_n ��ſ� n�� ������ �翬�� �ȵ���!
		cycle++;
	} while (n != new_n);

	printf("%d", cycle);
}