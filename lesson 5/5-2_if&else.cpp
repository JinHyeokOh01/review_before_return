#include <iostream>
using namespace std;

int main() {
	int res = 0;

	cout << "정수를 입력하십시오." << endl;
	cin >> res;

	if (res == 1)
		cout << "1이 입력되었습니다." << endl;
	else
		cout << "1 이외의 값이 입력되었습니다." << endl;

	return 0;
}