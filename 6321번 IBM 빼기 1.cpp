#include <iostream>

int main() {
	int n;
	char str[51];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		printf("String #%d\n", i + 1);
		for (int j = 0; str[j]; j++) {
			if (str[j] == 'Z') printf("A"); // ���� �� ����
			else printf("%c", str[j] + 1);
		}
		printf("\n\n");
	}
}