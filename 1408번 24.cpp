/*
	���� 13:52:30
	���� 14:00:00
	�� 00:07:30

	���� 13:52:30
	���� 12:52:30
	�� 23:00:00
*/
#include <iostream>

int main() {
	int current_hour, current_min, current_sec; // ���� �ð�
	int start_hour, start_min, start_sec; // ������ �ð�
	int answer_hour, answer_min, answer_sec;
	int carrier = 0;

	scanf("%d:%d:%d %d:%d:%d", &current_hour, &current_min, &current_sec, &start_hour, &start_min, &start_sec);

	// �� ���ϱ�

	// ��
	answer_sec = start_sec - current_sec;
	if (answer_sec < 0) {
		carrier = 1;
		answer_sec += 60;
	}

	// ��
	answer_min = start_min - current_min - carrier;
	if (answer_min < 0) {
		carrier = 1;
		answer_min += 60;
	}
	else carrier = 0;

	// ��
	answer_hour = start_hour - current_hour - carrier;
	if (answer_hour < 0) {
		answer_hour += 24;
	}

	// ���
	printf("%02d:%02d:%02d", answer_hour, answer_min, answer_sec);
}