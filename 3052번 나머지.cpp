/*
	���� �ٸ� �������� ������ �� ���� ���ϴ� �˰����� ������ 
	=> �������� �迭��!
*/

#include <iostream>

int main() {
	int num[10], count = 0;
	int remainder[42] = { 0 }; // 0~41

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]); 
		remainder[num[i]%42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (remainder[i]) count++;
	}

	printf("%d", count);
}