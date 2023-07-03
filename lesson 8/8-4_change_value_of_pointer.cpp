#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int b = 10;
	int* pA = 0;

	pA = &a;

	cout << "변수 a의 값은 " << a << "입니다." << endl;
	cout << "포인터 pA의 값은 " << pA << "입니다." << endl;
	cout << "*pA의 값은 " << *pA << "입니다." << endl;

	pA = &b;

	cout << "변수 b의 값은 " << b << "입니다." << endl;
	cout << "포인터 pA의 값은 " << pA << "입니다." << endl;
	cout << "*pA의 값은 " << *pA << "입니다." << endl;
	return 0;
}