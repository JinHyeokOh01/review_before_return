//3장 1번 문제
//다음과 같이 화면에 출력하는 코드를 작성하십시오.
/*
	원주율의 값은 얼마입니까?
	3.14↓
	원주율의 값은 3.14입니다.
*/

#include <iostream>
using namespace std;

int main() {
	double num = 0;
	cout << "원주율의 값은 얼마입니까? \n";
	cin >> num;
	cout << "원주율의 값은 " << num << "입니다.";

	return 0;
}