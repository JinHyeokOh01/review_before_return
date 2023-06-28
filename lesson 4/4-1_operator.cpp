//전위 후위 연산자
#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;

	b = a++;
	cout << "대입 후에 증가 연산자를 사용했으므로 b의 값은 " << b << "입니다.\n";
	cout << "a 값은? " << a << "\n";

	b = 0;
	a = 0;
	cout << "초기화\n";
	b = ++a;
	cout << "대입 전에 증가 연산자를 사용했으므로 b의 값은 " << b << "입니다.\n";

	return 0;
}