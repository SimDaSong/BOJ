/*
	https://www.acmicpc.net/problem/2839
	���� ���
*/
/*
	ó���� �����ߴ� �� ���ٴ� �������� ���� ����

	������ ��Ȯ�ϱ� �������� ��쿡 ����
	11 = 5 + 3 + 3 or 5 + 5 + 1
	8 = 5 + 3
*/

#include <iostream>

int main() {
	int n; // ����̰� ����ؾ� �� ���� ������ Ű�� ��	
	int count = 0; // ���� ��

	scanf("%d", &n);

	while (n > 0) {
		if (!(n % 5)) { count++; n -= 5; }
		else if (!(n % 3)) { count++; n -= 3; }
		else if (n / 5) { count++; n -= 5; }
		else if (n / 3) { count++; n -= 3; }
		else { printf("-1"); return 0; }
	}

	printf("%d", count);

	return 0;
}