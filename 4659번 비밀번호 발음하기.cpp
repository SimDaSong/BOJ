#include <iostream>
#include <cstring>

bool Acceptable(char *p) {
	bool include_vowel = false;
	int conti_vowel = 0, conti_consonant = 0;

	for (int i = 0; p[i]; i++) {
		// ������ �ϳ��� ���ԵǾ� �ִ°�
		if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u') {
			include_vowel = true;
			if (++conti_vowel == 3) return false;
			conti_consonant = 0;
		}

		else {
			if (++conti_consonant == 3) return false;
			conti_vowel = 0;
		}

		// ���� ���ڰ� �������� ���°�
		if ((p[i] != 'e') && (p[i] != 'o') && (p[i] == p[i + 1])) {
			return false;
		}
	}
	if (!include_vowel) return false;
	return true;
}

int main() {
	char password[21];

	while (true) {
		scanf("%s", password);
		
		if (!strcmp(password, "end")) {
			return 0;
		}

		printf("<%s> is ", password);
		if (Acceptable(password)) printf("acceptable.\n");
		else printf("not acceptable.\n");
	}
}