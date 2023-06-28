#include <iostream>
using namespace std;

int main() {
	int res = 0;
	char ans = 0;

	cout << "몇 번째 코스를 선택하시겠습니까?" << endl;
	cout << "정수를 입력하십시오." << endl;

	cin >> res;
	/*
	if (res == 1)
		ans = 'A';
	else
		ans = 'B';
	*/

	ans = (res == 1) ? 'A' : 'B';

	cout << ans << "코스를 선택했습니다." << endl;

	return 0;
}