/*
	https://www.acmicpc.net/problem/11720
	������ ��

	���� �Ҵ� �� �޾Ƶ� �� ��
*/

#include <iostream>

int main() {
	int num; // ������ ����
	int n[100]; // ����
	int sum = 0; // ���ڵ��� ��

	// ���� ���� �Է� �ޱ�
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%1d", &n[i]); // ���� �� �ڸ��� �Է� �ޱ�!!!!!
		sum += n[i];
	}

	printf("%d", sum);

	return 0;
}