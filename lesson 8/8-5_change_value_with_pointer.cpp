#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int* pA = &a;

	a = 5;

	cout << "변수 a의 값은 " << a << "입니다." << endl;

	*pA = 50;

	cout << "pA에 50을 대입했습니다." << endl;
	cout << "변수 a의 값은 " << a << "입니다." << endl;

	return 0;
}