#include <iostream>

int main() {
	int *load; // ���� ���̸� ������ ������ �迭
	int n; // ���� ��
	int increment = 0; // �������� ũ��
	int max = 0; // �ִ� �������� ũ��
	
	scanf("%d", &n);
	load = new int[n];

	scanf("%d", &load[0]); // for���� 1���� �����ҰŸ� 0�� ���� �Է��� �޾Ҿ��
	for (int i = 1; i < n; i++) {
		scanf("%d", &load[i]);

		if (load[i - 1] < load[i]) {
			increment += load[i] - load[i - 1];
		}
		else {
			if (max < increment) max = increment;
			increment = 0;
		}
	}

	if (max < increment) max = increment;
	
	printf("%d", max);

	delete[]load;
}