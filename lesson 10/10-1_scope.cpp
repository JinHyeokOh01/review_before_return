#include <iostream>
using namespace std;

void func();

int a = 0; //전역 변수(global variable)


int main() {
	int b = 1; //지역 변수(local variable)
	cout << "변수 a는 " << a << endl;
	cout << "변수 b는 " << b << endl;
	//cout << "변수 c는 " << c << endl; // 다른 함수 안의 지역 변수는 사용할 수 없다.

	func();

	return 0;
}

void func() {
	int c = 2; //지역 변수(local variable)

	cout << "func 함수에서는 a와 c를 사용할 수 있습니다." << endl;
	cout << "변수 a는 " << a << endl;
	// cout << "변수 b는 " << b << endl; // 다른 함수 안의 지역 변수는 사용할 수 없다.
	cout << "변수 c는 " << c << endl;
}
/*

전역 변수와 지역 변수의 이름은 같아도 상관없다.
int a = 0; //전역 변수 a

int main()
{
	int a = 0; //지역 변수 a
	a++; //지역 변수 a의 값이 증가

	::a++; //전역 변수 a의 값이 증가
	:: '범위 해결 연산자'


*/