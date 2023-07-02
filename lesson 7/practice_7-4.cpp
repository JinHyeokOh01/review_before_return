//7장 4번 문제
//주어진 형의 숫자를 제곱하는 함수 템플릿 template <class T>T square(T x)를 작성하십시오.

#include <iostream>
using namespace std;

template <class T>
T square(T x) {
	return x * x;
}

int main() {
	int num1 = 0;
	double num2 = 0;
	cout << "정수를 입력하십시오." << endl;
	cin >> num1;
	cout << num1 << "의 제곱은 " << square(num1) << "입니다." << endl;

	cout << "소수를 입력하십시오." << endl;
	cin >> num2;
	cout << num2 << "의 제곱은 " << square(num2) << "입니다." << endl;

	return 0;
}