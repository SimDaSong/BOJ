/*
	https://www.acmicpc.net/problem/10039
	��� ����
*/

#include <iostream>

int main() {
	int score[5]; // �л����� ����
	int sum = 0;

	// �л��� ���� �Է� �ޱ�
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if (score[i] < 40) score[i] = 40;
		sum += score[i];
	}
	printf("%d", sum / 5);
}