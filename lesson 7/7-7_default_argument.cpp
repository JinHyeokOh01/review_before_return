#include <iostream>
using namespace std;

void buy(int x = 10);

int main() {
	cout << "처음 구매가는 100만원" << endl;
	buy(100);

	cout << "두 번째 구매가는 기본가" << endl;
	buy();

	return 0;
}

void buy(int x) {
	cout << x << "만 원짜리 차량을 구입했습니다." << endl;
}