#include <iostream>
using namespace std;

int main() {
	int res = 0;
	cout << "정수를 입력하십시오. (1-5)" << endl;
	cin >> res;

	switch (res) {
	case 1:
	case 2:
		cout << "조금 더 노력합시다." << endl;
		break;
	case 3:
	case 4:
		cout << "이 페이스로 더 노력합시다." << endl;
		break;
	case 5:
		cout << "매우 우수합니다." << endl;
		break;
	default:
		cout << "1에서 5까지의 성적을 입력하십시오." << endl;
		break;
	}
	return 0;
}