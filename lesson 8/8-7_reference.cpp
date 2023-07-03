//레퍼런스 : 변수 등으로 초기화한 식별자
//형명& 레퍼런스명 = 변수; (레퍼런스명에는 식별자를 사용)

#include <iostream>
using namespace std;

int main() {
	int a = 5;
	//선언과 대입 동시에 해야함. 분리 불가
	int& rA = a;

	cout << "변수 a의 값은 " << a << "입니다." << endl;
	cout << "레퍼런스 rA의 값은" << rA << "입니다." << endl;

	rA = 50;

	cout << "rA에 50을 대입했습니다." << endl;
	cout << "레퍼런스 rA의 값은 " << rA << "(으)로 변경되었습니다." << endl;
	cout << "변수 a의 값도 " << a << "(으)로 변경되었습니다." << endl;
	cout << "변수 a의 주소는 " << &a << "입니다." << endl;
	cout << "레퍼런스 rA의 주소도" << &rA << "입니다." << endl;

	return 0;
}