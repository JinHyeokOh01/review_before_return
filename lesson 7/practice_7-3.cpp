//7장 3번 문제
//2번 문제의 코드의 함수 두 개를 인라인 함수로 만드십시오.

#include <iostream>

using namespace std;

inline int square(int x) { return x * x; }
inline double square(double x) { return x * x; }


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