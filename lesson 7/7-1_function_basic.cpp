#include <iostream>
using namespace std;

//buy 함수의 정의
void buy(int x) {
	cout << x << "만 원 짜리 차량을 구입했습니다." << endl;
}

//buy 함수의 호출
int main() {
	int num = 0;

	cout << "첫 번째 차량은 얼마입니까?" << endl;
	cin >> num;
	buy(num);
	//pass by value

	cout << "두 번째 차량은 얼마입니까?" << endl;
	cin >> num;
	buy(num);

	return 0;
}
