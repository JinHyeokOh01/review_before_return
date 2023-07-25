#include <iostream>
#include "10-6_my_func.h"
using namespace std;

int main() {
	int num1, num2, num3;

	cout << "첫 번째 정수 입력 : ";
	cin >> num1;
	cout << "두 번째 정수 입력 : ";
	cin >> num2;

	num3 = max(num1, num2);
	cout << "최댓값은 " << num3 << "입니다." << endl;

	return 0;
}
