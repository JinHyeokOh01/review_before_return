#include <iostream>
using namespace std;

//관용적 조건 사용하기

int main() {
	int num = 1;
	while (num) {
		cout << "정수를 입력하십시오. (0을 입력하면 종료됩니다.)" << endl;
		cin >> num;
		cout << num << "이(가) 입력되었습니다." << endl;
	}

	cout << "반복이 끝났습니다.";
	return 0;
}