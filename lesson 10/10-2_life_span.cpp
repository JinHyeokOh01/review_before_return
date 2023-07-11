//변수를 선언하면 메모리가 확보되고, 변수는 값의 저장 및 출력에 이용되고, 메모리가 해제된다.
//일반적인 지역 변수는 선언된 후, 함수가 종료될 때까지만 값을 저장할 수 있다.

#include <iostream>
using namespace std;

void func();

int a = 0; //전역 변수 a

int main() {
	for (int i = 0; i < 5; i++)
		func();

	return 0;
}

void func() {
	int b = 0; //지역 변수 b
	static int c = 0; //static 지역 변수 c -> static을 붙이면, 전역 변수와 같은 기억 수명. 프로그램이 끝날때까지 파괴되지 않는다.
	//정적 수명을 가진 지역 변수
	cout << "a : " << a << " b : " << b << " c : " << c << endl;
	a++;
	b++;
	c++;

	//b는 함수가 호출될때마다 0이 저장되고 함수가 끝날때마다 파괴된다.
}