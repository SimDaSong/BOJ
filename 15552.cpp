/*
	https://www.acmicpc.net/problem/15552
	���� A+B
	���	

	�ٽ� ����!!!!!!!!
*/

/*
	C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, 
	cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�, 
	endl ��� ���๮��(\n)�� ����. 
	��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�.
*/
#include <iostream>

int main() {
	(std::cin).tie(NULL); 
	std::ios_base::sync_with_stdio(false);

	int t; // �׽�Ʈ���̽��� ����
	int a, b; // �Է� ���� �� ��

	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}
}