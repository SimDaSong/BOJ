#include <iostream>

int main() {
	int n, count = 0;
	char word[101], alphabet[100][26] = { 0 };
	char continuity;

	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++) {
		// �Է� �޾� �ٷ� �˻�
		scanf("%s", word);
		continuity = word[0];
		for (j = 0; word[j]; j++) { // j�� 0���� �������� ������ aba ���� ��쿡 �˻� ����
			if (word[j] != continuity) {
				alphabet[i][continuity - 'a']++;
				if (alphabet[i][word[j] - 'a'] == 1) break; // �ϳ��� alphabet �迭�� �ٵ� �����ϸ� ���� ����
				continuity = word[j];
			}
		}
		if (word[j] == NULL) count++;
		std::cin.ignore();
	}

	printf("%d", count);
}