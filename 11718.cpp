/*
	https://www.acmicpc.net/problem/11718
	�״�� ����ϱ�

	=> �ٽ� ����!!!!!!1	
*/

/*
	scanf ����, %[]���� [] ���� �ִ� ���ڵ鸸 �Է� �ް� ������ �Է� ������ ����
*/

/*
	while(ch!=EOF) {
		ch = getchar();
		putchar(ch);
	}

	�� �ڵ带 ¥�� ���, EOF���� ����ϱ� ������ Ʋ��
*/

#include <iostream>

int main() {
	char ch = 0;

	while (true) {
		ch = getchar();
		if (ch == EOF) return 0;
		putchar(ch);
	}

	return 0;
}