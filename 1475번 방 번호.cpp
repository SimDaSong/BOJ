/*
	�� ��ȣ �ڸ����� �������� ����!!! ���� �� ����
*/

#include <iostream>

int main() {
	char room[8]; // �� ��ȣ
	int num[10] = { 0 }; // ����
	int max; 

	scanf("%s", room);

	// ++
	for (int i = 0; room[i]; i++) {
		room[i] -= '0'; // char�ε� int�� ���Ϸ��� �ϴϱ� �� �� �� �ʿ�
		if (room[i] == 6 || room[i] == 9) {
			if (num[6] > num[9]) num[9]++;
			else num[6]++;
		}
		else {
			num[room[i]]++;
		}
	}

	// max �� ã��
	max = num[0];
	for (int i = 1; i < 9; i++) { // num�� ���ؼ� ���ϴ� �Ŵϱ� i<9
		if (max < num[i]) max = num[i];
	}

	printf("%d", max);
}