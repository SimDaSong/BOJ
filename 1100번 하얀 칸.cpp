/*
	�Ͼ� ĭ

	�Ͼ� ĭ�� �ִ� ��
	0�� 0,2,4,..�� => i,j ¦���� ��
	1�� 1,3,5,..�� => i,j Ȧ���� ��
	...

	0�� : if (i%2==0) && (j%2==0) 
	1�� : if (i%2==1) && (j%2==1)
	...

	�������� 1�̳� 0�̳Ĵ� ���� �ٲ� ������ �ٲ�

	=> // for j=i%2; j<8; j+=2 �� �ϸ� i�� �Ű澲�� ��
*/

#include <iostream>

int main() {
	int count = 0;
	char chess[8][8]; // int�� �ƴ϶�!!
	bool even = true;

	// ü�� ĭ �Է� �ޱ�
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf("%1c", &chess[i][j]);
		}
		std::cin.ignore(); // char �Է� �ޤ��� �� ��� ��� ��
	}

	// �� ����
	for (int i = 0; i < 8; i++) { 
		for (int j = i % 2; j < 8; j += 2) {
			if (chess[i][j] == 'F') count++;
		}
	}

	// count ���
	printf("%d", count);
}