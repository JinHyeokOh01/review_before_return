#include <iostream>
using namespace std;

int main() {
	int res = 0;
	cout << "정수를 입력하십시오." << endl;

	cin >> res;

	switch (res) {
	case 1:
		cout << "1이 입력되었습니다." << endl;
		break;
	case 2:
		cout << "2가 입력되었습니다." << endl;
		break;
	default:
		cout << "1 또는 2를 입력하십시오" << endl;
		break;
	}

	return 0;
}