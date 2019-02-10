/*
	https://www.acmicpc.net/problem/1546
	���

	�ٽú���!
*/

#include <iostream>

int main() {
	int n; // ���� �� ������ ����
	int max = 0; // �ִ� ����
	double sum = 0, avg; // ���� �հ� ���
	double *subject; // ����

	// ���� �� �Է� �ޱ�
	scanf("%d", &n);
	
	// ���� ����ŭ ���� ����
	subject = new double[n];

	// ���� ���� �Է� �ޱ�
	for (int i = 0; i < n; i++) {
		scanf("%lf", &subject[i]);
		if (max < subject[i]) max = subject[i];
	}

	for (int i = 0; i < n; i++) {
		subject[i] = subject[i] / max * 100;
		sum += subject[i];
	}

	avg = sum / n;
	if (avg - (int)avg == 0) printf("%.2f", avg);
	else if (avg - (float)avg == 0) printf("%g", avg);
	else printf("%lf", avg);

	delete[]subject;
}