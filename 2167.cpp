/*
	2���� �迭�� ��
*/

#include <iostream>

int main() {
	int row, col; // �迭�� ũ��
	int **arr;
	int k, a, b, x, y; // ���� ���� �κ��� ����, ��ǥ��
	int sum; // ��

	// �迭�� ũ�� �Է� �ޱ�
	scanf("%d %d", &row, &col);

	// ���� �Ҵ� �ޱ�
	arr = new int*[row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}

	// �迭 �� �Է� �ޱ�
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	// ���� ���� �κ��� ���� �Է� �ް� ������ŭ �ݺ�
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &a, &b, &x, &y);
		
		// �� ���ϱ�
		sum = 0;
		for (int j = a - 1; j < x; j++) {
			for (int m = b - 1; m < y; m++) {
				sum += arr[j][m];
			}
		}

		printf("%d\n", sum);
	}

	for (int i = 0; i < row; i++) {
		delete[]arr[i];
	}
	delete[]arr; // �� �κе� �־���� ��!
}