/*
	���̾�

	������ �� ���� PQRS!
*/

#include <iostream>

int main() {
	char word[16]; // �ܾ�
	int time = 0;

	// �ܾ� �Է� �ޱ�
	scanf("%s", word);

	// �� �ɸ��� �ð� ���ϱ�
	for (int i = 0; word[i]; i++) {
		if (word[i] <= 'O') 
			time += (word[i] - 'A') / 3 + 3;
		else if (word[i] <= 'S') time += 8;
		else if (word[i] <= 'V') time += 9;
		else time += 10;
	}

	printf("%d", time);
}