/*
	https://www.acmicpc.net/problem/15552
	빠른 A+B
	출력	

	다시 보기!!!!!!!!
*/

/*
	C++을 사용하고 있고 cin/cout을 사용하고자 한다면, 
	cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, 
	endl 대신 개행문자(\n)를 쓰자. 
	단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
*/
#include <iostream>

int main() {
	(std::cin).tie(NULL); 
	std::ios_base::sync_with_stdio(false);

	int t; // 테스트케이스의 개수
	int a, b; // 입력 받을 두 수

	std::cin >> t;
	for (int i = 0; i < t; i++) {
		std::cin >> a >> b;
		std::cout << a + b << "\n";
	}
}