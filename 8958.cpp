/*
	https://www.acmicpc.net/problem/8958
	OX ����
*/

#include <iostream>

int main() {
	char ch[80]; // ���
	int n; // �׽�Ʈ ���̽��� ��
	int score = 0;
	int count; // �����ؼ� ���� ������ ����

	// �׽�Ʈ ���̽� �� �Է� �ޱ�
	scanf("%d", &n);

	// �׽�Ʈ ���̽� �� ��ŭ ��� �Է� �ް� ���� ���
	for (int i = 0; i < n; i++) {
		// ��� �Է�
		scanf("%s", ch);
		// ���� ���ϱ�
		count = 1;
		score = 0;
		for (int j = 0; ch[j]; j++) {
			if (ch[j] == 'O') {
				score += count;
				count++;
			}
			else count = 1;
		}
		// ���� ���
		printf("%d\n", score);
	}
}