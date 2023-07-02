//7장 2번 문제
//1의 코드의 double형 값을 제곱하는 함수 double square(double x)를 추가하십시오.

#include <iostream>

using namespace std;

int square(int x);
double square(double x);

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

int square(int x) {
	return x * x;
}

double square(double x) {
	return x * x;
}