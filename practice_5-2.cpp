//5장 2번 문제
//키보드로 2개의 정수값을 입력받은 후, 경우에 따라 다음과 같은 메시지를 출력하는 코드를 작성하십시오.
/*
값이 같은 경우 -> "두 숫자는 같습니다."
값이 다른 경우 -> "O보다 X가 큽니다." (단, O, X는 입력한 정수, O < X)
*/

#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0;
	cout << "2개의 정수를 입력하십시오." << endl;
	cin >> a;
	cin >> b;
	if (a == b)
		cout << "두 숫자는 같습니다." << endl;
	else if (a > b)
		cout << b << "보다 " << a << "가 큽니다." << endl;
	else
		cout << a << "보다 " << b << "가 큽니다." << endl;

	return 0;
}