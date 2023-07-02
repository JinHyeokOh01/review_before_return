//7장 1번 문제
//int 형 숫자를 제곱한 값을 반환하는 함수 int square(int x)를 작성하시오.

#include <iostream>

using namespace std;

int square(int x) {
	return x*x;
}

int main() {
	int num = 0;
	cout << "정수를 입력하십시오." << endl;
	cin >> num;
	cout << num << "의 제곱은 " << square(num) << "입니다." << endl;

	return 0;
}