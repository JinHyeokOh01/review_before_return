#include <iostream>
using namespace std;

//함수의 선언
int max(int x, int y);

int main() {
	int num1 = 0, num2 = 0;
	cout << "첫 번째 정수 입력" << endl;
	cin >> num1;
	cout << "두 번째 정수 입력" << endl;
	cin >> num2;

	cout << "최댓값은 " << max(num1, num2) << "입니다." << endl;

	return 0;
}

//함수의 정의
int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}