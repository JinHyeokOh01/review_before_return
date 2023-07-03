//주소를 저장하는 특수한 변수 : 포인터(pointer)

//선언 방법
// 형명* 포인터명;

// 포인터에는 원칙적으로 지정된 형태의 주소값만 저장할 수 있음.

#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int* pA = 0;

	a = 5;
	pA = &a;

	cout << a << endl;
	cout << &a << endl;
	cout << pA << endl;

}

//포인터 pA에 변수 a의 주소를 저장하기
//pA가 변수 a를 가리킨다.
//pA(의 값)가 변수 a(의 위치)를 가리킨다.