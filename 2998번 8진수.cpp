/*
	�� ���� ����� ������ 

	strlen�̳� strcat�� cstring!!!!!!!!1
*/

#include <iostream>
#include <cstring> // <string>�� �ƴ϶� <cstring>�̳� <string.h>

int main() {
	char bin[103], new_bin[103];

	scanf("%s", bin);
	new_bin[0] = NULL;
	
	if (strlen(bin) % 3 == 1) {
		new_bin[0] = new_bin[1] = '0'; new_bin[2] = NULL;
	}
	else if (strlen(bin) % 3 == 2) {
		new_bin[0] = '0'; new_bin[1] = NULL;
	}
	strcat(new_bin, bin);

	for (int i = 0; new_bin[i]; i+=3) {
		printf("%d", (new_bin[i] - '0') * 4 + (new_bin[i + 1] - '0') * 2 + (new_bin[i + 2] - '0'));
	}
}