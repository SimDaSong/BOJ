/*
	https://www.acmicpc.net/problem/2750
	�� �����ϱ�

	���� ���� �̿�
*/

#include <iostream>

int main() {
	int n; // ���� ����
	int *arr;
	
	// ���� ���� �Է� �ޱ�
	scanf("%d", &n);
	// ���� ������ŭ �����迭�Ҵ� �ް� �� �Է� �ޱ�
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int tmp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	// ���
	for (int i = 0; i < n; i++) printf("%d\n", arr[i]);

	delete[]arr;
}