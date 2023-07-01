#include <iostream>
using namespace std;

void buy(int x, int y) {
	cout << x << "만 원짜리, " << y << "만 원짜리 차량을 구입했습니다." << endl;
}

int main() {
	int num1 = 0, num2 = 0;

	cout << "구입하시는 차량의 가격은 얼마입니까?" << endl;
	cin >> num1;
	cout << "구입하시는 차량의 가격은 얼마입니까?" << endl;
	cin >> num2;

	buy(num1, num2);
	return 0;	
}