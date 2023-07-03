//포인터를 통해 변수의 값을 역추적하기
//포인터 앞에 * 연산자 붙임. * 연산자 : 간접참조연산자(indirection operator)
// *포인터 명;

#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int* pA = 0;
	a = 5;
	pA = &a;
	
	cout << "변수 a의 값은 " << a << endl;
	cout << "변수 a의 주소는 " << &a << endl;
	cout << "포인터 pA의 값은 " << pA << endl;
	cout << "*pA의 값은 " << *pA << endl;

	return 0;
}