/*
	https://www.acmicpc.net/problem/4344
	����� �Ѱ���
*/

#include <iostream>

int main() {
	int c; // �׽�Ʈ ���̽��� ����
	int n; // �л��� ��
	int score[1000]; // �л����� ����
	int sum; double avg; // ������ �հ� ���
	int count; // ��� �Ѵ� �л����� ��

	// �׽�Ʈ�� ����
	scanf("%d", &c);
	
	// �׽�Ʈ�� ���� ��ŭ �л��� ���� ���� �Է� �ޱ�
	for (int i = 0; i < c; i++) {
		sum = 0; count = 0;
		
		scanf("%d", &n);

		for (int j = 0; j < n; j++) { // ���� �Է� �ް� �� ���ϱ�
			scanf("%d", &score[j]); ///////// & !!!!!!!!!!!!!!!!
			sum += score[j];
		}

		// ��� ���ϱ�
		avg = sum / (double)n;

		for (int j = 0; j < n; j++) { // ��� �Ѵ� �л����� �� ���ϱ�
			if (avg < score[j]) count++;
		}

		// ���� ���ؼ� ���
		printf("%.3f%%\n", count / (double)n * 100); // % ����Ϸ��� %%
	}
}