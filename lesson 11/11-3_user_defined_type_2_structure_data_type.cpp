//구조체(structure data type)
//다른 형들을 묶어주는 기능
//구조체형 선언 : 어떤 형을 묶을지 결정하는 일

/*
struct 구조체형명{
	형명 식별자;
	형명 식별자;
};

*/

//구조체형명 구조체 변수명;

//각 변수는 멤버 라고 부름. 멤버를 이용하기 위해서는 도트 연산자(.) 이용. 멤버에 접근한다.

#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

int main() {
	Car car1;

	cout << "차량 번호를 입력하십시오." << endl;
	cin >> car1.num;

	cout << "연료량을 입력하십시오." << endl;
	cin >> car1.gas;

	cout << "차량 번호는 " << car1.num << " : 연료량은 " << car1.gas << "입니다." << endl;

	return 0;
}