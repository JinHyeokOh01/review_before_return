#include <iostream>
using namespace std;

/*
int main() {
	for (int i = 1; i <= 5; i++) {
		cout << "반복하고 있습니다." << endl;
	}
	cout << "반복 종료" << endl;
	return 0;
}
*/

int main() {
	int num = 0;
	cout << "몇 개의 *를 출력하시겠습니까?" << endl;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cout << '*';
	}
	cout << endl;
	return 0;
}