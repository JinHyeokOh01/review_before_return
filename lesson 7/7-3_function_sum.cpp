#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return x + y;
}

int main(){
	int num1 = 0, num2 = 0;

	cout << "첫 번째 정수 입력" << endl;
	cin >> num1;

	cout << "두 번째 정수 입력" << endl;
	cin >> num2;

	cout << "두 수의 합은 " << sum(num1, num2) << "입니다." << endl;

	return 0;

}