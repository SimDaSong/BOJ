/*
	������
*/
/*
	�� : 0, �� : 1
*/

#include <iostream>

int main() {
	int yut[4]; 
	int front; // �� ���� �� ���� ��

	// ��¦���� ���� 3�� �Է� �ޱ�
	for (int i = 0; i < 3; i++) {
		// ��¦ �Է� �ް� ��, �� ���� ����
		front = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &yut[i]);
			if (!yut[i]) front++;
		}
	
		// ���������� �Ǻ�
		if (!front) printf("E\n");
		else printf("%c\n", 'A' + (front - 1));
	}
}