/*
	��¥ ���

	��Ģ�� ã�� �� �߿��ѵ�
*/

#include <iostream>

int main() {
	int e, s, m;
	int test[3], year;

	// e,s,m �Է� �ޱ�
	scanf("%d %d %d", &e, &s, &m);

	test[0] = e; test[1] = s; test[2] = m;
	
	// e�� �������� ���� ã��
	year = e; test[1] = e; test[2] = e;

	while (true) {
		// ������ ã���� ���� ��� �� ����
		if (test[1] == s && test[2] == m) {
			printf("%d", year);
			return 0;
		}
		
		if ((test[1] += 15) > 28) test[1] %= 28;
		if ((test[2] += 15) > 19) test[2] %= 19;
		year += 15;
	}
}