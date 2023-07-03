#include <iostream>

using namespace std;

//주소 연산자(address operator, &)
//변수의 값이 메모리의 '어느 위치'에 저장되어 있는가

int main() {
	int a = 0;

	a = 5;

	cout << "변수 a의 값은 " << a << "입니다." << endl;
	cout << "변수 a의 주소는 " << &a << "입니다." << endl;

	return 0;
}